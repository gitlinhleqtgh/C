namespace Ex4
{
    public class SinhVien
    {
        public int MSSV{set;get;}
        public string Ten{set;get;}
        public double DTB{set;get;}
        public SinhVien(SinhVien s)
        {
          MSSV = s.MSSV;
          NameSV = s.NameSV;
          DTB = s.DTB;
        }
        public void Show()
        {
            Console.WriteLine("Info: {0} - {1} - {2}",MSSV,Ten,DTB );
        }
        public override string ToString()
        {
            return "Info: "+MSSV+" "+Ten+" "+DTB;
        }
    }
}