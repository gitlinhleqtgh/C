using System;

namespace Bt9 {
    class Program {
        static void Main (string[] args) {
            Console.WriteLine ("Hello World!");
            Random random = new Random ();
            int sorandom = random.Next (1, 7);
            string con = "y";
            do {
                Console.WriteLine ("Nhap so ban doan: ");
                int sodoan = Int32.Parse (Console.ReadLine ());
                if (sodoan == sorandom) {
                    Console.WriteLine ("Ban doan dung roi !");
                    Console.WriteLine ("Choi tiep ko ? nhap y or n !");
                    string x = Console.ReadLine ().ToString ();
                    if (x == "y") con = "y";
                    else break;
                } else {
                    Console.WriteLine ("Ban doan sai roi !");
                    Console.WriteLine ("choi tiep ko ? nhap y or n !");
                    string x = Console.ReadLine ().ToString ();
                    if (x == "y") con = "y";
                    else break;
                }
            } while (con == "y");
        }
    }
}