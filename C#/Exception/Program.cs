using System;

namespace Exception
{
    class Program
    {
        static void Main(string[] args)
        {
            double x,y;
            Console.Write("x= ");
            x= Convert.ToDouble(Console.ReadLine());
            Console.Write("y= ");
            y= Convert.ToDouble(Console.ReadLine());
            try{
                Console.WriteLine(Chia(x,y));
            }
            catch(DivideByZeroException e)
            {
                Console.WriteLine(e.ToString());
            }
            finally
            {
                
            }
        }
        static public double Chia(double a, double b)
        {
            return a/b;
        }
    }
}
