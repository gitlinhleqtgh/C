using System;
using Elco;
using Gloubus;
namespace Test {
    class A {
        public int FuncA () { return (FuncB () * FuncC ()); }
        public virtual int FuncB () { return (5); }
        public int FuncC () { return (12); }
    }
    class B : A {
        public override int FuncB () { return (10); }
    }
    class Program {
        public static void Main () {
            B obj1 = new B ();
            Console.WriteLine (obj1.FuncA ());

        }
    }

}