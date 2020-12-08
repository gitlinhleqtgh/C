using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace StudentMVC.Models
{
    public class LopSH
    {
        public LopSH()
        {
            SVs = new HashSet<Student>();
        }
        [Key]
        public int Id_Lop{get;set;}
        public string NameLop{get;set;}
        public virtual ICollection<Student> SVs {get;set;}
    }
}