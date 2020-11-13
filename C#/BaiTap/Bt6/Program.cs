using System;

namespace Bt6
{
    class Program
    {
        public static double TinhDiem(float cc,float gk,float ck)
        {
            return (cc*2+gk*3+ck*5)/10;
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int check =(int)TinhDiem(8,8,8);
            if(check>=8)
            Console.WriteLine("Gioi");
            else if(check<8 && check>=6)
            Console.WriteLine("Kha");
            else Console.WriteLine("Trung Binh");
        }
    }
}
