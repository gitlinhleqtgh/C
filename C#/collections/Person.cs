using System;
class Person
{
    public int id{set;get;}
    public string name{set;get;}
    public int age{set;get;}
    public Person(int id,string name,int age)
    {
        this.id=id;
        this.name=name;
        this.age=age;
    }
    public override string ToString()
    {
        return id+" "+name+" "+age;
    }
    
}