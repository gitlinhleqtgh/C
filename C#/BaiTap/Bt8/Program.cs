using System;

namespace Bt8 {
    class Program {
        static void Main (string[] args) {
            Console.WriteLine ("Hello World!");
            int i = 1;
            while(i<=112)
            {
                Console.Write((char)i+"\t");
                if(i%10==0)
                Console.Write("\n");
                i++;
            }
            // do {
            //     Console.Write ((char) i + "\t");
            //     if (i % 10 == 0)
            //         Console.Write ("\n");
            //     i++;
            // }
            // while (i <= 122);
            Console.ReadLine ();
        }
    }
}