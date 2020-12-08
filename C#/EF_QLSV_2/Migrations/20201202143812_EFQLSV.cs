using System;
using Microsoft.EntityFrameworkCore.Migrations;

namespace EF_QLSV_2.Migrations
{
    public partial class EFQLSV : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "LopSHs",
                columns: table => new
                {
                    Id_Lop = table.Column<int>(type: "int", nullable: false)
                        .Annotation("SqlServer:Identity", "1, 1"),
                    NameLop = table.Column<string>(type: "nvarchar(max)", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_LopSHs", x => x.Id_Lop);
                });

            migrationBuilder.CreateTable(
                name: "SVs",
                columns: table => new
                {
                    MSSV = table.Column<string>(type: "nvarchar(450)", nullable: false),
                    nameSV = table.Column<string>(type: "nvarchar(max)", nullable: true),
                    Gender = table.Column<bool>(type: "bit", nullable: true),
                    NS = table.Column<DateTime>(type: "datetime2", nullable: true),
                    Id_Lop = table.Column<int>(type: "int", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_SVs", x => x.MSSV);
                    table.ForeignKey(
                        name: "FK_SVs_LopSHs_Id_Lop",
                        column: x => x.Id_Lop,
                        principalTable: "LopSHs",
                        principalColumn: "Id_Lop",
                        onDelete: ReferentialAction.Cascade);
                });

            migrationBuilder.CreateIndex(
                name: "IX_SVs_Id_Lop",
                table: "SVs",
                column: "Id_Lop");
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "SVs");

            migrationBuilder.DropTable(
                name: "LopSHs");
        }
    }
}
