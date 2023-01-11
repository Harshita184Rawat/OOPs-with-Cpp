#include<iostream>
using namespace std;

class base
{
    public:
        base(){cout <<"I am in base"<<endl;}
        ~base(){cout<<"Base destructor";}
        
};


class Derived: public base
{
    public:
        Derived(){cout<<"I am in Derived"<<endl;}
        ~Derived(){cout<<"Derived destructor"<<endl;}
};

int main()
{
    Derived D1;
    
}


