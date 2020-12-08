using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata;

#nullable disable

namespace EF_QLSV.Models
{
    public partial class EFQLSVContext : DbContext
    {
        public EFQLSVContext()
        {
        }

        public EFQLSVContext(DbContextOptions<EFQLSVContext> options)
            : base(options)
        {
        }

        public virtual DbSet<ClassSv> ClassSvs { get; set; }
        public virtual DbSet<SinhVien> SinhViens { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            if (!optionsBuilder.IsConfigured)
            {
//#warning To protect potentially sensitive information in your connection string, you should move it out of source code. You can avoid scaffolding the connection string by using the Name= syntax to read it from configuration - see https://go.microsoft.com/fwlink/?linkid=2131148. For more guidance on storing connection strings, see http://go.microsoft.com/fwlink/?LinkId=723263.
                optionsBuilder.UseSqlServer("Data Source=localhost,1433;Initial Catalog=EFQLSV;User ID=sa;Password=123456");
            }
        }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.Entity<ClassSv>(entity =>
            {
                entity.HasKey(e => e.IdClass)
                    .HasName("PK__ClassSV__003FCC7D5377015A");

                entity.ToTable("ClassSV");

                entity.Property(e => e.IdClass).ValueGeneratedNever();

                entity.Property(e => e.NameClass).HasMaxLength(50);
            });

            modelBuilder.Entity<SinhVien>(entity =>
            {
                entity.HasKey(e => e.IdSv)
                    .HasName("PK__SinhVien__B7701289F3D43C2F");

                entity.ToTable("SinhVien");

                entity.Property(e => e.IdSv).HasColumnName("IdSV");

                entity.Property(e => e.BirthSv)
                    .HasColumnType("datetime")
                    .HasColumnName("BirthSV");

                entity.Property(e => e.NameSv)
                    .IsRequired()
                    .HasMaxLength(50)
                    .HasColumnName("NameSV");

                entity.HasOne(d => d.IdClassNavigation)
                    .WithMany(p => p.SinhViens)
                    .HasForeignKey(d => d.IdClass)
                    .HasConstraintName("fk_ClassSV");
            });

            OnModelCreatingPartial(modelBuilder);
        }

        partial void OnModelCreatingPartial(ModelBuilder modelBuilder);
    }
}
