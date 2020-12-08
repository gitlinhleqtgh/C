using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Hosting;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.Hosting;
using Microsoft.Extensions.Logging;
using StudentMVC.Models;

namespace StudentMVC
{
    public class Program
    {
        public static void Main(string[] args){
            CreateHostBuilder(args).Build().Run();
        }

        public static IHostBuilder CreateHostBuilder(string[] args) =>
            Host.CreateDefaultBuilder(args)
                .ConfigureWebHostDefaults(webBuilder =>
                {
                    webBuilder.UseStartup<Startup>();
                });
        public static void InSertSV()
        {
            CSDL db = new CSDL();
            Student std = new Student{
                StudentId = 1,
                Name = "Le Van A",
                Gender = true,
                Birth = new DateTime(2020,11,08),
                Id_Lop = 2
            };
            db.Students.Add(std);
            db.SaveChanges();
        }
    }
}
