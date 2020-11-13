using System;

namespace lambda {
    class Program {
    //    public delegate int TinhToan (int a, int b);
        static void Main (string[] args) {
            Console.WriteLine ("Hello World!");
            Func<int, int, int> tinhtong = (int x, int y) => {
                return x + y;
            };
            Action<int> thongbao = (int v1) => {
                Console.WriteLine (v1);
            };
            int kq1 = tinhtong (5, 3);
            int kq2 = tinhtong (5, 5);
            thongbao (kq1);
            thongbao (kq2);
        }
    }
}