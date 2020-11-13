using System;
using System.Collections;

namespace HashTable
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Hashtable hashTable = new Hashtable();
            Hashtable hashTable1 = new Hashtable(5);
            hashTable1.Add("k","Kteam");
            hashTable1.Add("l","Lelinh");
            Hashtable hashTable2 =  new Hashtable(hashTable1);

            Hashtable hash = new Hashtable();
            hash.Add("K","Kteam");
            hash.Add("l","Lelinh");
            hash.Add("v","Vanlinh");

            Console.WriteLine("Count = "+hash.Count);

            foreach(DictionaryEntry item in hash)
            {
                Console.WriteLine(item.Key+"\t"+item.Value);
            }
            hash["mt"]= "Mytam";
            hash["st"]= "Sontung";
            Console.WriteLine("Count = "+hash.Count);

            foreach(DictionaryEntry item in hash)
            {
                Console.WriteLine(item.Key+"\t"+item.Value);
            }


            Console.ReadLine();
        }
    }
}
