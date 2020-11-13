using System;

namespace Bt4
{
    class Program
    {
        public static float sum(int a,int b){return a+b;}
        public static float hieu(int a,int b){return a-b;}
        public static float tich(int a, int b){return a*b;}
        public static double thuong(int a,int b){return a%b;}
        public static double chiahet(int a,int b){return a/b;}
        public static int tang1donvi(int a){return a++;}//su dung a xong moi tang a len 1 don vi
        public static int tang(int a){return ++a;}//tang a len 1 don vi roi su dung
        public static int giam1donvi(int a){return a--;}//su dung a xong moi giam a xuong 1 don vi
        public static int giam(int a){return --a;}//tang a len 1 don vi roi su dung
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Console.WriteLine(sum(3,4));
            Console.WriteLine(hieu(5,4));
            Console.WriteLine(tich(3,4));
            Console.WriteLine(chiahet(9,2));
            Console.WriteLine(thuong(6,4));
            Console.WriteLine(tang(9));
            Console.WriteLine(giam(11));
        }
    }
}
