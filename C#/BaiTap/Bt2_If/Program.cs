using System;

namespace Bt2_If
{
    class Program
    {
        public static void chanLe(int n)
        {
           if(n%2==0)
           Console.WriteLine("So chan !");
           else
           Console.WriteLine("So le !");
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Console.WriteLine("Nhap n : ");
            int n=Int32.Parse(Console.ReadLine());
            chanLe(n);
        }
    }
}
