#include<iostream>
using namespace std;

class Top
{
    public:
        int id, key;
        Top()
        {
            id = 0, key =1;
        }
};

class Derived1: public Top
{
    public:
        Derived1()
        {
            id = id+10;
        }

};

class Derived2: public Top
{
    public:
        Derived2(){key = key + 10;}
};

class A: public Derived2 , public Derived1
{
    public:
        void show(){cout<<"ID is"<<id<<endl;}
        void print(){cout<<"key is "<<key<<endl;}
};

int main()
{
    A A1;
    A1.show();
    A1.print();
    return 0;
    
}
