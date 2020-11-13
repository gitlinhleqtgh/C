using System;
namespace Ex5
{
    public class myClass:IFace1,IFace2
    {
        public void A()
        {
            Console.WriteLine("This is A");
        }
        public void B()
        {
            Console.WriteLine("This is B");
        }
        public void C()
        {
            Console.WriteLine("This is C");
        }
    }
}