using System;

namespace SelectionSort
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            var array = new[] {2,5,3,1,7,4,6,9,8};
            Swap( array, 7, 8);
            for(int i=0;i<9;i++)
            {
                Console.Write(array[i]+" ");
            }
         
        }
        static void Swap<T>(T[] array,int m,int n)
        {
            T temp = array[m];
            array[m]=array[n];
            array[n]= temp;
        }
        static void SelectionSort<T>(T[] array)
        {
        }
    }
}
