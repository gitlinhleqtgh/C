using System;

namespace TamGiac {
    public class tamGiac {
        private int a;
        private int b;
        private int c;
        public void Nhap () {
            Console.WriteLine ("Nhap 3 canh Tam Giac: ");
            a = Convert.ToInt32 (Console.ReadLine ());
            b = Convert.ToInt32 (Console.ReadLine ());
            c = Convert.ToInt32 (Console.ReadLine ());
        }
        public void Xuat () {
            if (a >= b + c || b >= a + c || c >= c + b) {
                Console.WriteLine ("Khong phai tam giac xin nhap lai !");
                Nhap ();
            } else {
                Console.WriteLine ("=> 3 Canh tam giac la :a={0} b={1} c={2}", a, b, c);
                switch (KtraLoaiTG ()) {
                    case 1:
                        Console.WriteLine ("=> Tam giac la tam giac deu !");
                        break;
                    case 2:
                        Console.WriteLine ("=> Tam giac la tam giac vuong can !");
                        break;
                    case 3:
                        Console.WriteLine ("=> Tam giac la tam giac can !");
                        break;
                    case 4:

                        Console.WriteLine ("=> Tam giac la tam giac vuong !");
                        break;
                    case 5:
                        Console.WriteLine ("=> Tam giac la tam giac thuong !");
                        break;
                }
                Console.WriteLine("Chu Vi Tam Giac: "+chuvi());
                Console.WriteLine("Dien Tich Tam Giac: "+dientich());
            }
        }
        public int KtraLoaiTG () {
            if (a == b || a == c || b == c) {
                if (a == b && b == c)
                    return 1;
                else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
                    return 2;
                else
                    return 3;
            } else {
                if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
                    return 4;
                else return 5;
            }
        }
        public double chuvi () {
            return a + b + c;
        }
        public double dientich () {
            double p = chuvi()/2;
            return Math.Sqrt(p*(chuvi()/2-a)*(p-b)*(p-c)); //heron
        }
    }
}