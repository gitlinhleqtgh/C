using System;

namespace Bt7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Console.WriteLine("Tu khoa nao dung de ket thuc vong lap trong while ?");
            Console.WriteLine("a - quit");
            Console.WriteLine("b - break");
            Console.WriteLine("c - continue");
            Console.WriteLine("d - exit");
            string choose;
            string con="y";
            // while(con=="y")
            // {
            //     Console.WriteLine("Nhap cau tra loi : ");
            //     choose=Console.ReadLine().ToString();
            //     if(choose=="a"||choose=="c" ||choose=="d")
            //     {
            //         Console.WriteLine("Sai ! ");
            //         Console.WriteLine("Nhan y neu ban muon chon lai n neu khong ...");
            //         con=Console.ReadLine().ToString();
            //         if(con=="y") con="y";
            //         else break;
            //     }else if(choose=="b")
            //     {
            //         Console.WriteLine("Dung !");
            //         break;
            //     }
            // }
            do
            {
                Console.WriteLine("Nhap dap an: ");
                choose = Console.ReadLine().ToString();
                if(choose=="b")
                {
                    Console.WriteLine("Dap an dung !");
                    break;
                }
                else if(choose=="a"||choose=="c"||choose=="d")
                {
                    Console.WriteLine("Dap an sai !");
                    Console.WriteLine("Nhap y neu ban muon chon lai ...");
                    con=Console.ReadLine().ToString();
                    if(con=="y") con="y";
                    else break;
                }
            }while(con=="y");
        }
    }
}
