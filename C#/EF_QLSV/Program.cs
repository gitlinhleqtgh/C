using System;
using System.Data;
using System.Data.Common;
using System.Linq;
using EF_QLSV.Models;

namespace EF_QLSV {
    class Program {
        // private const int V = 1;

        static void Main (string[] args) {
            // dotnet ef dbcontext scaffold "Data Source=localhost,1433;Initial Catalog=QLSV;User ID=sa;Password=123456" Microsoft.EntityFrameworkCore.SqlServer -o Models
            EFQLSVContext db = new EFQLSVContext ();
            //var listSV = from p in db.SinhViens select p;

            //Linq query
            //var listSV = from p in db.SinhViens select p;
            //var listSV = from p in db.SinhViens select new (p.Name)

            //var listSV = db.SinhViens.Select( p => {p.Name});

            // var listSV = db.SinhViens.Select(p => new {p.NameSv});
            // SinhVien s1 = new SinhVien{
            //     NameSv = "Huan Hoa Hong",
            //     BirthSv = DateTime.Now,
            //     IdClass = 2
            // };
            // db.SinhViens.Add(s1);
            // db.SaveChanges();
            InSertSV();
           //ReadSV();

        }
        public static void InSertSV () 
        {
            EFQLSVContext db = new EFQLSVContext ();
         //   var listSV = db.SinhViens.Select (p => new { p.NameSv });
            SinhVien s1 = new SinhVien {
                NameSv = "Co Minh Hieu",
                BirthSv = DateTime.Now,
                IdClass = 3
            };
            db.SinhViens.Add (s1);
            db.SaveChanges ();
        }
        public static void ReadSV()
        {
            EFQLSVContext db = new EFQLSVContext ();
           var listSV = db.SinhViens.Select (p => new { p.NameSv });
            Console.WriteLine(listSV);
        }
    }
}