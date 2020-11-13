using System;

namespace Bt2_amDuong
{
    class Program
    {
        public static void amDuong(int n)
        {
            if(n<0)
            Console.WriteLine("{0} la so am !",n);
            else
            Console.WriteLine("{0} la so duong !",n);
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int n=Int32.Parse(Console.ReadLine());
            amDuong(n);
        }
    }
}
