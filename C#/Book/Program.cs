using Internal;
using System;

namespace Book
{
    using Controllers;
    internal class Program
    {
        private static void Main(string[] args)
        {
            BookController controller = new BookController();
            controller.Single(0);
            
        }
    }
}
