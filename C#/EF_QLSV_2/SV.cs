using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System;

namespace EF_QLSV_2 {
    public class SV {
        [Key][Required]
        public string MSSV { get; set; }
        public string nameSV { get; set; }
        public bool? Gender { get; set; }
        public DateTime? NS{get;set;}
        public int Id_Lop { get; set; }
        [ForeignKey ("Id_Lop")]
        public virtual LopSH LopSH { get; set; }
    }

}