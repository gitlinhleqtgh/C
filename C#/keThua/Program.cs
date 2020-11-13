using System;

namespace keThua
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Animal animal = new Animal(0,40);
            Cat cat = new Cat(1,50,"Mouse");
            Animal test1 = new Cat(2,30,"s");
        //    Cat test2 = new Animal(2,30,"s"); sai

            animal.ShowLegs();
            cat.ShowLegs();
            cat.Eat();
        }
    }
}
