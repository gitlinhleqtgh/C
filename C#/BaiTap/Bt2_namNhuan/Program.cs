using System;

namespace Bt2_namNhuan {
    class Program {
        public static void namNhuan (int n) {
            if (n % 4 == 0 && n % 100 != 0 | n % 400 == 0)
                Console.WriteLine ("{0} la nam nhuan !", n);
            else
                Console.WriteLine ("{0} khong phai la nam nhuan !", n);
        }
        static void Main (string[] args) {
            Console.WriteLine ("Hello World!");
            int n = Int32.Parse (Console.ReadLine ());
            namNhuan (n);
        }
    }
}