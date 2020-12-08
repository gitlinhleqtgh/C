using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Options;


namespace StudentMVC.Models
{
    //dotnet ef migrations add <Ten CSDL>
    //dotnet ef database update
    public class CSDL:DbContext
    {
        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseSqlServer(@"Data Source=localhost,1433;Initial Catalog=MVCStudent;User ID=sa;Password=123456");
        }  
        public virtual DbSet<Student> Students{get;set;}
        public virtual DbSet<LopSH> LopSHs{get;set;}
    }
}