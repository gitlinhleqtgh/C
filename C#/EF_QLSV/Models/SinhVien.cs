using System;
using System.Collections.Generic;

#nullable disable

namespace EF_QLSV.Models
{
    public partial class SinhVien
    {
        public int IdSv { get; set; }
        public string NameSv { get; set; }
        public DateTime BirthSv { get; set; }
        public int? IdClass { get; set; }

        public virtual ClassSv IdClassNavigation { get; set; }
    }
}
