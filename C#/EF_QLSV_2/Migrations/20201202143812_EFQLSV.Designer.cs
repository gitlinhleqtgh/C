﻿// <auto-generated />
using System;
using EF_QLSV_2;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using Microsoft.EntityFrameworkCore.Metadata;
using Microsoft.EntityFrameworkCore.Migrations;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion;

namespace EF_QLSV_2.Migrations
{
    [DbContext(typeof(CSDL))]
    [Migration("20201202143812_EFQLSV")]
    partial class EFQLSV
    {
        protected override void BuildTargetModel(ModelBuilder modelBuilder)
        {
#pragma warning disable 612, 618
            modelBuilder
                .UseIdentityColumns()
                .HasAnnotation("Relational:MaxIdentifierLength", 128)
                .HasAnnotation("ProductVersion", "5.0.0");

            modelBuilder.Entity("EF_QLSV_2.LopSH", b =>
                {
                    b.Property<int>("Id_Lop")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("int")
                        .UseIdentityColumn();

                    b.Property<string>("NameLop")
                        .HasColumnType("nvarchar(max)");

                    b.HasKey("Id_Lop");

                    b.ToTable("LopSHs");
                });

            modelBuilder.Entity("EF_QLSV_2.SV", b =>
                {
                    b.Property<string>("MSSV")
                        .HasColumnType("nvarchar(450)");

                    b.Property<bool?>("Gender")
                        .HasColumnType("bit");

                    b.Property<int>("Id_Lop")
                        .HasColumnType("int");

                    b.Property<DateTime?>("NS")
                        .HasColumnType("datetime2");

                    b.Property<string>("nameSV")
                        .HasColumnType("nvarchar(max)");

                    b.HasKey("MSSV");

                    b.HasIndex("Id_Lop");

                    b.ToTable("SVs");
                });

            modelBuilder.Entity("EF_QLSV_2.SV", b =>
                {
                    b.HasOne("EF_QLSV_2.LopSH", "LopSH")
                        .WithMany("SVs")
                        .HasForeignKey("Id_Lop")
                        .OnDelete(DeleteBehavior.Cascade)
                        .IsRequired();

                    b.Navigation("LopSH");
                });

            modelBuilder.Entity("EF_QLSV_2.LopSH", b =>
                {
                    b.Navigation("SVs");
                });
#pragma warning restore 612, 618
        }
    }
}
