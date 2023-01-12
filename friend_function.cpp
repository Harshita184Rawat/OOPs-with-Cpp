#include<iostream>
using namespace std;

class sample
{
    int id;
    public:
        sample()
        { 
            id=13;
        }
        friend void func(sample &dd);
};

void func(sample &dd)
{
    cout<<dd.id;
};

int main()
{
    sample d;
    func(d);

    return 0;
}