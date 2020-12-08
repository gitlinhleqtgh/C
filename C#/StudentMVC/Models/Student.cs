using System.ComponentModel.DataAnnotations;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.ComponentModel.DataAnnotations.Schema;

namespace StudentMVC.Models
{
    public class Student
    {
        [Key]
        [Required]
        public int StudentId { get; set; }
        public string Name { get; set; }
        public int Age { get; set; }
        public bool? Gender { get; set; }
        public DateTime? Birth{get;set;}
        public int Id_Lop { get; set; }
        [ForeignKey("Id_Lop")]
        public virtual LopSH LopSH { get; set; }
        
    }
}