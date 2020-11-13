using System;
using System.Collections.Generic;
namespace Exam {
    class Program {
        static void Main (string[] args) {
            List<int> list = new List<int> { 5, 9, 7, 11 };
            Console.WriteLine (FindMaxSum (list));
        }
        public static int FindMaxSum (List<int> list) {
           // throw new NotImplementedException ("Waiting to be implemented.");
            int largest = int.MinValue;
            int second = int.MinValue;
            for(int i=0;i<list.Count;i++)
            for(int j=i+1;j<list.Count;i++)
            int currentMax = array[i] + array[j];

           if (currentMax > max) {
             max = currentMax;
           }
            int largestSum = largest + second;
            return largestSum;
        }
    }
}