#include<iostream>
using namespace std;

class base
{
    public:
        int id;
        base(){ id = 12; }
};

class Derived1: public base
{
    public:
        Derived1(){id = id+2; }
    
};

class Derived2: public Derived1
{
    public:
        void show_id()
        {
            cout<<id<<endl;
        }
};
int main()
{
    Derived2 D;
    D.show_id();
    return 0;
}