using System;
using System.Threading;
using System.Threading.Tasks;

namespace TheadVsAsyncAwait
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Console.WriteLine("Thead Vs Async/Await");
            Synchronous();
            AsynchronousWithThread();
            AsynchronousWithTask();

            // UseTaskReturn();
        }
        static void Synchronous()
        {
            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();
            TheadOne();
            TheadTwo();
            watch.Stop();
            Console.WriteLine($"Execution Time: {watch.ElapsedMilliseconds} ms");
        }
        static void AsynchronousWithThread()
        {
            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();
            Thread th_one = new Thread(() => {
                Thread.Sleep(5000);
                Console.WriteLine("ThreadOne");
            });
            Thread th_two = new Thread(() => {
                Thread.Sleep(2000);
                Console.WriteLine("ThreadTwo");
            });
            th_one.Start();
            th_two.Start();

            //Chan luong truc tiep cho toi khi cac tien trinh th_one va th_two hoan thanh
            th_one.Join();
            th_two.Join();

            watch.Stop();
            Console.WriteLine($"Execution Time: {watch.ElapsedMilliseconds} ms");
        }
        static void AsynchronousWithTask()
        {
            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();
            var task_one = TaskOne();
            var task_two = TaskTwo();
            Task.WaitAll(task_one,task_two);
            Console.WriteLine($"Execution time: {watch.ElapsedMilliseconds} ms");
        }
        // static void UseTaskReturn()
        // {
        //     var watch = new System.Diagnostics.Stopwatch();
        //     watch.Start();
        //     var task_return = TaskReturnOne();
        //     var task_return2 = TaskReturnTwo(10);
        //     var result = await Task.WhenAll(task_return,task_return2);
        //     Console.WriteLine(result[0],result[1]);
        // }


        static void TheadOne()
        {
            Thread.Sleep(5000);
            Console.WriteLine("ThreadOne");
        }
        static void TheadTwo()
        {
            Thread.Sleep(2000);
            Console.WriteLine("ThreadTwo");
        }
        static async Task TaskOne()
        {
            await Task.Delay(5000);
            Console.WriteLine("TaskOne");
        }
        static async Task TaskTwo()
        {
            await Task.Delay(2000);
            Console.WriteLine("TaskTwo");
        }
        //Task return tham so
        static async Task<string> TaskReturnOne()
        {
            await Task.Delay(5000);
            return "Task Return";
        }
        static async Task<int> TaskReturnTwo(int n)
        {
            await Task.Delay(2000);
            return n;
        }
    }
}
