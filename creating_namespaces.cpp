#include<iostream>
using namespace std;

namespace first_space
{
    void func(){cout<<"function in the first_space"<<endl;}
}

namespace second_space
{
    void func(){cout<<"function in the second namespace"<<endl;}
}

int main()
{
    first_space::func();
    second_space::func();
    return 0;
}

/*
    using namespace first_space;
    int main()
    {
        func();
        return 0;
    }
*/

