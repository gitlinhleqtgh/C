using System;

namespace Bt10_BubleSort
{
    class Program
    {
        public static void BubleSortTang(int[] dataset)
        {
            for(int i=0;i<dataset.Length;i++)
            for(int j=dataset.Length-1;j>i;j--)
            {
                if(dataset[j]<dataset[j-1])
                {
                    int temp = dataset[j-1];
                    dataset[j-1]=dataset[j];
                    dataset[j]=temp;
                }
            }
        }
        public static void BubleSortGiam(int[] dataset)
        {
            for(int i=0;i<dataset.Length;i++)
            for(int j=dataset.Length-1;j>i;j--)
            {
                if(dataset[j]>dataset[j-1])
                {
                    int temp = dataset[j-1];
                    dataset[j-1]=dataset[j];
                    dataset[j]=temp;
                }
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int [] arr= new int[10] {3,7,4,5,8,2,10,9,6,1}; 
            BubleSortTang(arr);
            for(int i=0;i<arr.Length;i++)
                Console.WriteLine(arr[i]);
            BubleSortGiam(arr);
            foreach(int i in arr)
            Console.WriteLine(i);
        }
     
    }
}
