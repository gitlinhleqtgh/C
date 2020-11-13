using System;

namespace Ex3
{
    public class SV
    {
        private int MSSV;
        private string NameSV;
        private double DTB{set;get;}  //thuong dung
        //GET 
        public int Get_MSSV(){
            return MSSV;
        }
        //set
        public void Set_MSSV(int new_MSSV){
            MSSV = new_MSSV;
        }
        public string P_NameSV{
            get {
                return NameSV;
            }
            set{
                NameSV =value;
            }
        }
      
        //user define
        public SV(){
            MSSV = 1;
            NameSV = "le van linh";
            DTB = 10.0;
        }
        //co tham so
        public SV(int mssv ,string nsv,double dtb){
            MSSV = mssv;
            NameSV = nsv;
            DTB = dtb;
        }
        //constructor
        public SV(SV s)
        {
          MSSV = s.MSSV;
          NameSV = s.NameSV;
          DTB = s.DTB;
        }
        public void ShowInfo(){
            Console.WriteLine("MSSV = {0} - NameSV = {1} - DTB={2}",MSSV,NameSV,DTB);
        }
        public override string ToString()
        {
            return "MSSV = "+MSSV+" NameSV = "+NameSV+" DTD = "+DTB;
        }
    }
}
 