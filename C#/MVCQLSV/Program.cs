using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Hosting;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.Hosting;
using Microsoft.Extensions.Logging;

using System.Data;
using System.Data.SqlClient;

namespace MVCQLSV
{
    public class Program
    {
        public static void Main(string[] args)
        {
            CreateHostBuilder(args).Build().Run();
            string sqlconnectStr     = "Data Source=localhost,1433;Initial Catalog=QLSV;User ID=sa;Password=123456";
            SqlConnection connection = new SqlConnection(sqlconnectStr);
            
            string query = "select count(*) from SinhVien";
            SqlCommand cmd = new SqlCommand(query,connection);
            connection.Open();
            int n = (int) cmd.ExecuteScalar();
            Console.Write("n={0}",n);
            connection.Close();
        }

        public static IHostBuilder CreateHostBuilder(string[] args) =>
            Host.CreateDefaultBuilder(args)
                .ConfigureWebHostDefaults(webBuilder =>
                {
                    webBuilder.UseStartup<Startup>();
                });
    }
    // static public SqlConnection cnn;
    // static int ExecuteScalar(SqlCommand command,string query)
    // {
    //     SqlConnection cmd= new SqlCommand(query,cnn);
    //     cnn.Open();\
    //     int n = (int) cmd.ExecuteScalar();
    //     cnn.Close();         
    // // }
    // static int ExecuteNonQuery(string query)
    // {
    //     SqlCommand cmd = new SqlCommand(query,cnn);
    //     cnn.Open();
    // }
}
