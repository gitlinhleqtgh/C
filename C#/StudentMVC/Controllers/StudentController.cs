using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using StudentMVC.Models;


namespace StudentMVC.Controllers
{
    public class StudentController : Controller
    {
        public IActionResult Index()
        {
           // List<Student> students1 = new DataContext().Students.Select();
            List<Student> students = new List<Student>();
            students.Add(new Student{
                StudentId = 1,
                Name = "Le Van A",
                Gender = true,
                Birth = new DateTime(2020,11,08),
                Id_Lop = 2

            });
            students.Add(new Student{
                StudentId = 2,
                Name = "Le Van B",
                Gender = false,
                Birth = new DateTime(2021,11,08),
                Id_Lop = 1 
            });

            //ViewData["Students"] = students;
           // ViewBag.StudentList = students;
           
            return View(students);
        }
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