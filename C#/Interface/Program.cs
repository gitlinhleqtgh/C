using System;

namespace Interface
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Product product = new Product(20);
            product.ShowPrice();
            product.orderAction(12);
        }
    }
    interface IProduct
    {
        public void ShowPrice();
    }
    interface IOder
    {
        public void orderAction(int Action);
    }
    class Product: IProduct,IOder
    {
        public double price;
        public Product(double price)
        {
            this.price=price;
        }
        public void ShowPrice()
        {
            Console.WriteLine($"Price: {price}");
        }
        public void orderAction(int Action)
        {
            Console.WriteLine($"Order: {Action}");
        }
    }
}
