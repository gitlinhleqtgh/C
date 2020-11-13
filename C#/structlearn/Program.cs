using System;

namespace structlearn
{
    class Program
    {
        struct SinhVien
        {
            public int Id;
            public string Name;
            public double Math;
            public double Physical;
            public double English;
        }
        static void Nhap(out SinhVien sv)
        {
            Console.WriteLine("Nhap");
            Console.WriteLine("Id :");
            sv.Id=Int32.Parse(Console.ReadLine());
            Console.WriteLine("Ten: ");
            sv.Name=Console.ReadLine();
            Console.WriteLine("Toan: ");
            sv.Math=double.Parse(Console.ReadLine());
            Console.WriteLine("Ly :");
            sv.Physical=double.Parse(Console.ReadLine());
            Console.WriteLine("Anh :");
            sv.English=double.Parse(Console.ReadLine());
        }
        static void Xuat(SinhVien sv)
        {
            Console.WriteLine("Thong Tin Sinh Vien");
            Console.WriteLine("SV : {0} {1} Math:{2} Physical:{3} English:{4} Average:{5}",sv.Id,sv.Name,sv.Math,sv.Physical,sv.English,Average(sv));
        }
        static double Average(SinhVien sv)
        {
            return (sv.Math+sv.Physical+sv.English)/3;
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Tinh diem SV");
            SinhVien sv1 = new SinhVien();
            Nhap(out sv1);
            Xuat(sv1);
        }
    }
}
