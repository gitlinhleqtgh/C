using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Options;

namespace EF_QLSV_2
{
    public class CSDL:DbContext
    {
        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseSqlServer(@"Data Source=localhost,1433;Initial Catalog=EFQLSV;User ID=sa;Password=123456");
        }  
        public virtual DbSet<SV> SVs{get;set;}
        public virtual DbSet<LopSH> LopSHs{get;set;}

    }
}