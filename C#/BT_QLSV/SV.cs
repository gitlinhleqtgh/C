using System;
namespace BT_QLSV
{
    public class SV
    {
        public int MSSV{get;set;}
        public string NameSV{get;set;}
        public double DTB{get;set;}
        public void Show()
        {
            Console.WriteLine("MSSV : {0} - NameSV : {1} - DTB : {2}",MSSV,NameSV,DTB);
        }
        public override string ToString()
        {
            return "MSSV : "+MSSV+" + NameSV : "+NameSV+" + DTB : "+DTB;
        }
        public override bool Equals(object obj)
        {
            if(this.MSSV == ((SV)obj).MSSV
            && this.NameSV == ((SV)obj).NameSV
            && this.DTB == ((SV)obj).DTB)
            return true;
            else
            {
                return false;
            }
        }
        
        // override object.GetHashCode
        public override int GetHashCode()
        {
            // TODO: write your implementation of GetHashCode() here

            return base.GetHashCode();
        }
    }
}