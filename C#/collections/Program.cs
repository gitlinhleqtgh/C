using System;
using System.Collections;

namespace collections
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            ArrayList myArray = new ArrayList();
            myArray.Add(new Person(1,"le",20));
            myArray.Add(new Person(2,"van",21));
            myArray.Add(new Person(3,"linh",22));
            Console.WriteLine("First List");
            foreach(Person item in myArray)
            {
                Console.WriteLine(item.ToString());
            }
            myArray.Sort(new SortPersons());
            Console.WriteLine();
            Console.WriteLine("Danh sach Person da duoc xap xep theo tuoi tang dan");
            foreach(Person item in myArray)
            {
                Console.WriteLine(item.ToString());
            }
        }
    }
    public class SortPersons:IComparer
    {
        public int Compare(object x, object y)
        {
            Person p1= x as Person;
            Person p2 =y as Person;
            if(p1==null || p2==null)
            {
                throw new InvalidOperationException();
            }
            else
            {
                if(p1.age>p2.age)
                {
                    return 1;
                }
                else if(p1.age==p2.age)
                {
                    return 0;
                }
                else
                
                {
                    return -1;
                }
            }
        }
    }

}
