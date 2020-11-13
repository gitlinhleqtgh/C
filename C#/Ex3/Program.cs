using System;

namespace Ex3
{
    class Program
    {
        static void Main(string[] args)
        {
            SV s1 = new SV();
            SV s2 = new SV(2,"le van o",9.5);
            SV s3 = new SV(s1);

            s3.Set_MSSV(s1.Get_MSSV());
            s3.P_NameSV = s2.P_NameSV;

            s1.ShowInfo();
            s2.ShowInfo();
            s3.ShowInfo();
            Console.WriteLine(s1.ToString());
        }
    }
}
