#include<iostream>
using namespace std;
int v=20;
int main()
{
    int v=30;
    cout<<"local value of v is\n "<<v;
    cout<<::v;

    return 0;
}
