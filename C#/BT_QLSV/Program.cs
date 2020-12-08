using System;
using System.Data;
using System.Data.SqlClient;

namespace BT_QLSV {
    class Program {
        static public SqlConnection connection;
        public static void Main (string[] args) {
            string sqlconnectStr = "Data Source=localhost,1433;Initial Catalog=QLSV;User ID=sa;Password=123456";
            connection = new SqlConnection (sqlconnectStr);

            //string query = "select count(*) from SinhVien";
            // SqlCommand cmd = new SqlCommand (query, connection);
            // connection.Open ();
            // int n = (int) cmd.ExecuteScalar ();
            //Console.Write ("n={0}", n);
            //connection.Close ();

            //string query = "insert into SinhVien values('Le',10)";
            // string query = "update SinhVien set Name = 'Lin' ,DTB=9 where Id=1";
            // ExecuteNonQuery (query);

            // string query2 = "select * from SinhVien";
            // SqlCommand cmd = new SqlCommand(query2,connection);
            // connection.Open();
            // SqlDataReader r = cmd.ExecuteReader();
            // while(r.Read())
            // {
            //     string MSSV = r[0].ToString();
            //     string NameSV = r["Name"].ToString();
            //     int DTB = Convert.ToInt32(r["Dtb"].ToString());
            //     Console.WriteLine("MSSV = {0}, NameSV={1},Age = {2}",MSSV,NameSV,DTB);
            // }
            // connection.Close();

            // string query4 = "select * from SinhVien";
            // SqlCommand cmd = new SqlCommand(query4,connection);
            // SqlDataAdapter da =  new SqlDataAdapter(cmd);
            // DataSet ds = new DataSet();
            // connection.Open();
            
        }
        static int ExecuteScalar (string query) {
            SqlCommand cmd = new SqlCommand (query, connection);
            int n = (int) cmd.ExecuteScalar ();
            connection.Open();
            return n;
        }
        static void ExecuteNonQuery (string query) {
            SqlCommand cmd = new SqlCommand (query, connection);
            connection.Open ();
            cmd.ExecuteNonQuery ();
            connection.Close ();
        }
        static void ExecuteReader (string query) {
            SqlCommand cmd = new SqlCommand (query, connection);
            connection.Open ();
            cmd.ExecuteReader ();
            connection.Close ();
        }
        public void getRecord(){
            string query = "select * from SinhVien";
            SqlCommand cmd = new SqlCommand(query,connection);
            SqlDataAdapter da =  new SqlDataAdapter(cmd);
            DataSet ds = new DataSet();
            connection.Open();
        }
    }
}