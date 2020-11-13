using System;

namespace Class_diem
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Diem diem = new Diem();
            diem.nhap();
            diem.hien();
            diem.nhapdodichuyen();
            diem.dichuyen();
            diem.hien();
            diem.doixung();
            diem.hien();
        }
    }
}



// Xây dựng lớp diem với các thuộc tính tung độ, hoành độ của
// điểm đó, phương thức đổi tọa độ giữa dương và âm, phương thức di
// chuyển theo một giá trị nhập vào từ bàn phím, phương thức hiện
// điểm lên màn hình.
// a, Hướng dẫn:
// + các thuộc tính gồm có:
// int x ; // tọa độ hoành độ
// int y ; // tọa độ tung độ
// + các phương thức của lớp:
// nhập thông tin
// đổi tọa độ sang truc doi xung
// phương thức move: di chuyển điểm
// phương thức hien: hiện thông tin lên màn hình