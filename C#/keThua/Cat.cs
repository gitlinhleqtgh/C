using System;
class Cat : Animal {
    public string Food;
    public Cat(int l,float w,string f):base(l,w)
    {
        Legs=l;
        Weigh=w;
        Food=f;
    }
    public new void ShowLegs()
    {
        base.ShowLegs();
        Console.WriteLine($"Ham ShowLegs new cua Cat : Legs: {Legs}");
    }
    public void Eat () {
        Console.WriteLine ($"Meal: {Food}");
    }
}