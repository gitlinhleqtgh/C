// using System;

// namespace Ex2
// {
//     class Program
//     {
//         static void Input(int[] arr){
//             for(int i=0;i<arr.Length;++i){
//             Console.WriteLine("Nhap myArray[{0}]",i);
//             arr[i]=Convert.ToInt32(Console.ReadLine());
//             }
//             Console.WriteLine();
//         }
//         // static void Output(int[] arr){
//         //     for(int i= 0;i<=arr.Length;++i){
//         //         Console.WriteLine("myArray[{0}]",i,arr[i]);
//         //     }
//         //     Console.WriteLine();

//         // }
//         static void Output(int[] arr){
//             foreach(int s in arr){
//                 Console.WriteLine("{0}",s);
//             } 
//         }
//         static void Main(string[] args){
//            int o;
//            Console.WriteLine("Nhap o:");
//            o =Convert.ToInt32(Console.ReadLine());
//            int[] arr=new int[o];
//            Input(arr);
//            Output(arr);
//         }
//     }
// }
// using System;

// namespace Ex2
// {
//     class Program
//     {
//         static void Input(int[] arr){
//             for(int i=0;i<arr.Length;++i){
//             Console.WriteLine("Nhap myArray[{0}]",i);
//             arr[i]=Convert.ToInt32(Console.ReadLine());
//             }
//             Console.WriteLine();
//         }

//         static void Output(int[] arr){
//             foreach(int s in arr){
//                 Console.WriteLine("{0}",s);
//             } 
//         }
//         static void Main(string[] args){
//            int [,] arr = new int [3,2]
//            {
//                {1,2},
//                {3,4},
//                {5,6}
//            };
//            for (int i =0;i<3;i++){
//                    for(int j = 0;j<2;++j){
//                        Console.WriteLine("[{0},{1}] ={2}",i,j,arr[i,j]);
//                      }
//                      Console.WriteLine();
//            }
//            foreach(var e in arr){
//                Console.WriteLine( " {0}",e);
//            }
//         }
//     }
// }
using System;

namespace Ex2
{
    class Program
    {
        static void Main(string[] args){
           string[][] softwares = new string[3][];
           softwares[0] = new string[]{
               "Bitdefender","Karperky","Nav"
           };
           softwares[1] = new string[]{
               "IE","Moxilla","Opera","Avant"
           };
           softwares[2]= new string[]{
               "MS Word","OpenOffice"
           };
           for(int i=0;i<softwares.GetLength(0);++i)
           for (int j = 0;j<softwares[i].GetLength(0); ++j){
               Console.WriteLine(softwares[i][j]);
           }
           Console.WriteLine();
           foreach(string[] element in softwares){
               foreach(string item in element){
               Console.WriteLine(item);
               }
               Console.WriteLine();
           }
        }
    }
}
