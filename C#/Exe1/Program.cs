using System;

namespace Exe1
{
    class Program
    {
        static void Permutation(ref int a, ref int b)
        {
            //Console.WriteLine("m = {0},n = {1}", a, b);
            int temp = a;
            a = b;
            b = temp;
            //Console.WriteLine("m = {0},n = {1}", a, b);
        }
        static double Avg(ref int a, ref int b)
        {
            return (a + b) / (float)2;
        }
        static void A(out int s)
        {
            s = 5;
        }
        static void Main(string[] args)
        {
            // int x = 1;
            // double y = 3.1;
            // //y=x; ep kieu ngam dinh
            // x = (int)y;
            // Console.WriteLine("x = {0}", x);

            //String -> Number : Parse,TryParrse
            // string s = "123", s1 = "123.1";
            // int x = Int32.Parse(s);
            // Console.WriteLine("x+1 = {0}", x + 1);
            // double x1;
            // double.TryParse(s1, out x1);   //bool
            // Console.WriteLine("x1+1 = {0}", x1 + 1);

            // int x = 0;
            // Console.Write("Nhap x = ");
            // x = Convert.ToInt32(Console.ReadLine());
            // Console.WriteLine("x+1 = {0}", x + 1);

            //khai bao 2 bien m,n
            int t;
            int m, n;

            //gia tri m,n nhap tu ban phim
            Console.WriteLine("Nhap m = ");
            m = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Nhap n= ");
            n = Convert.ToInt32(Console.ReadLine());

            //ref and out
            Permutation(ref m, ref n);
            Console.WriteLine("m = {0},n = {1}", m, n);
            A(out t);
            Console.WriteLine("t = {0}", t);
            double avg = Avg(ref m, ref n);
            Console.WriteLine("avg = {0}", avg);
        }
    

        
    }
}