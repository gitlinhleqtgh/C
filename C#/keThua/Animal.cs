using System;
class Animal {
    public int Legs{get;set;}
    public float Weigh{get;set;}
    public Animal(int l,float w)
    {
        Legs=l;
        Weigh=w;
    }
    public void ShowLegs(){
        Console.WriteLine($"Legs: {Legs}");
    }
}