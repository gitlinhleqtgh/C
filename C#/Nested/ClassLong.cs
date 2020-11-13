using System;
namespace Nested {
    public partial class ClassLong {
        public Nested nested { set; get; }
        public class Nested {
            string name;
            private string v;

            public Nested (string v) {
                this.v = v;
            }

            public void getNested (string name) {
                this.name = name;
            }
            public void ShowName () {
                Console.WriteLine (name);
            }
        }
        public void Info () {
            nested.ShowName ();
        }

    }
}