using System;
using System.Text;

namespace Generics
{
    public class MyGeneric<T>
    {
        private T[] items;
        public T[] Items
        {
            get {return items;}
        }
        public MyGeneric(int Size)
        {
            items = new T[Size];
        }
        public T GetByIndex(int Index)
        {
            //Nếu index vượt ra khỏi chỉ số phần tử của mảng thì ném ra ngoại lệ
            if(Index<0||Index>=items.Length)
            {
                throw new IndexOutOfRangeException();
            }
            else
            {
                return items[Index];
            }
        }
        public void SetItemValue(int Index,T Value)
        {
            if(Index<0 || Index>=items.Length)
            {
                throw new IndexOutOfRangeException();
            }
            else
            items[Index]=Value;
        }
    }
}