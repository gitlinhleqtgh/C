using System;
namespace Ex5
{
    public class yourClass: IFace1,IFace2
    {
        void IFace1.A()
        {
            Console.WriteLine("This is A");
        }
        void IFace2.A()
        {
            Console.WriteLine("This is A1");
        }
        void IFace1.B()
        {
            Console.WriteLine("This is B");
        }
        void IFace2.C()
        {
            Console.WriteLine("This is C");
        }
    }
}