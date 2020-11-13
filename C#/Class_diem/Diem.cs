using System;
class Diem
{
    int x,y,dx,dy;
    public void nhap()
    {
        Console.WriteLine("Nhap toa do diem: ");
        x=int.Parse(Console.ReadLine());
        y=int.Parse(Console.ReadLine());
    }
    public void nhapdodichuyen()
    {
        Console.WriteLine("Nhap do di chuyen: ");
        dx=int.Parse(Console.ReadLine());
        dy=int.Parse(Console.ReadLine());
    }
    public void dichuyen()
    {
        x+=dx;
        y+=dy;
    }
    public void doixung()
    {
        x=-x;
        y=-y;
    }
    public void hien()
    {
        Console.Write("Toa do diem la: (");
        Console.Write("{0};{1})",x,y);
        Console.WriteLine();
    }
}