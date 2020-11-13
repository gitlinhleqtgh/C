using System;

namespace Ex5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            myClass m = new myClass();
            ((IFace1)m).A();
            ((IFace2)m).A();
            yourClass y = new yourClass();
            ((IFace1)y).A();
            ((IFace2)y).A();
        }
    }
}
