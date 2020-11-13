using System;

namespace Ex4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            SinhVien s = new SinhVien(1,"Linh",10.0);
            s.Show();
            Console.WriteLine(s.ToString());
        }
    }
}

