using System;

namespace Bt5 {
    class Program {
        public static void SoLonNhat (int a, int b, int c) {
            if (a > b) {
                if (a > c)
                    Console.WriteLine ("{0} la so lon nhat", a);
                else
                    Console.WriteLine ("{0} la so lon nhat ", c);
            } else if (b > c)
                Console.WriteLine ("{0} la so lon nhat", b);
            else
                Console.WriteLine ("{0} la so lon nhat ", c);
        }
        static void Main (string[] args) {
            Console.WriteLine ("Hello World!");
            SoLonNhat (4, 6, 9);
        }
    }
}