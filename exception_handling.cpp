#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    try
    {
        if(b==0) throw 0;
        cout<<a/b<<endl;
    }
    catch(int Myexp)
    {
        cout<<"Divide by zero Not possible";
    }
    
    return 0;
}
