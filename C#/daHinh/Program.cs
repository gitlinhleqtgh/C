using System;

namespace daHinh
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Animal animal = new Animal();
            Dog dog = new Dog();
            animal.Speak();
            dog.Speak();
            Product p1 = new Iphone();
            p1.ProductInfo();
        }
    }
    class Animal
    {
        public virtual void Speak()
        {
            Console.WriteLine("Animal is speaking ...");
        }
    }
    class Dog: Animal
    {
        public override void Speak()
        {
            Console.WriteLine("Dog is speaking ...");
        }
    }
    abstract class Product
    {
        protected double price;
        public abstract void ProductInfo();
        public void TestProduct()
        {
            this.ProductInfo();
        }
    }
    class Iphone: Product
    {
        public  Iphone()
        {
            price = 500;
        }
        public override void ProductInfo()
        {
            Console.WriteLine($"Iphone Gia: {price}");
        }
    }
}
