using System;
using System.Collections;

namespace Generics
{
    class Program
    {
        // public static void Swap(ref int a,ref int b)
        // {
        //     int temp = a;
        //     a=b;
        //     b=temp;
        // }
        public static void Swap<T>(ref T a,ref T b)
        {
            T temp= a;
            a=b;
            b=temp;
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int a=10,b=9;
            double c=9.3,d=9.4;
            Console.WriteLine($"{a} {b}");
            Console.WriteLine($"{c} {d}");
            Swap<int>(ref a,ref b);
            Swap<double>(ref c,ref d);
            
            Console.WriteLine($"{a} {b}");
            Console.WriteLine($"{c} {d}");

            MyGeneric<int> myGeneric = new MyGeneric<int>(5);
            myGeneric.SetItemValue(0,10);
            myGeneric.SetItemValue(2,20);
            myGeneric.SetItemValue(1,15);
            Console.WriteLine(myGeneric.GetByIndex(2));
            Console.WriteLine("------------------");
            ArrayList taphop = new ArrayList();
            string s= "xin Chao !";
            taphop.Add(s);
            taphop.Add("Linh");
            taphop.Insert(1,"Le");
            for(int i=0;i<taphop.Count;i++)
            {
                Console.WriteLine(taphop[i]);
            }
            string[] mang = new string[]{"DECEMBER","1998"};
            taphop.AddRange(mang);
            Console.WriteLine("---------------");
            foreach(object item in taphop)
            {
                Console.WriteLine(item);
            }
            taphop.Remove("Le");
            taphop.RemoveAt(1);
           // taphop.Sort();
            taphop.Sort(new CaseInsensitiveComparer());
            Console.WriteLine("---------------");
            IEnumerator e = taphop.GetEnumerator();
            while(e.MoveNext())
            Console.WriteLine(e.Current.ToString());
            ArrayList ten = new ArrayList(){"Mai","Lan","Cuc","Tram"};
            if(ten.Contains("Mai"))
            {
            int vitri = ten.IndexOf("Mai");
            ten.RemoveAt(vitri);
            }
            else
            ten.Clear();
            Console.WriteLine("---------------");
            foreach(object item in ten)
            {
                Console.WriteLine(item);
            }
            Hashtable danhsach = new Hashtable();
            danhsach.Add("apple","Tao");
            danhsach.Add("mango","Xoai");
            danhsach.Add("orange","Cam");
            danhsach.Add("grape","Nho");
            Console.WriteLine("--------------");
            Console.WriteLine(danhsach["grape"].ToString());
            
            danhsach.Remove("grape");
            Console.WriteLine("----------------");
            foreach(DictionaryEntry item in danhsach)
            {
                Console.WriteLine(item.Key+" "+item.Value);
            }
            if(!danhsach.ContainsKey("banana"))
            danhsach.Add("banana","Chuoi");
            if(!danhsach.ContainsValue("Chanh"))
            danhsach.Add("lemon","Chanh");
            Console.WriteLine("-----------------");
            foreach(Object obj in danhsach.Keys)
            Console.WriteLine(obj);
        }
    }
}
