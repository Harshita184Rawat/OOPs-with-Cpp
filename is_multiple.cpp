#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if(a%b==0)
        cout<< b<<"is a multiple of "<< a;
    else
        cout<< b<<" is not a multiple of "<< a ;
    return 0;
}
