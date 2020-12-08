using System;
using System.Collections.Generic;

#nullable disable

namespace EF_QLSV.Models
{
    public partial class ClassSv
    {
        public ClassSv()
        {
            SinhViens = new HashSet<SinhVien>();
        }

        public int IdClass { get; set; }
        public string NameClass { get; set; }

        public virtual ICollection<SinhVien> SinhViens { get; set; }
    }
}
