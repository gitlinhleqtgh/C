using System;

namespace Nested
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            ClassLong nestedclass = new ClassLong();
            nestedclass.nested = new ClassLong.Nested("Nested");
            nestedclass.Info();
        }
    }
}
 