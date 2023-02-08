// program to handle divide by zero
#include<iostream>
using namespace std;
int main()
{
    try
    {
       int a,b;
        cout<<"Enter value of a and b: ";
        cin>>a>>b;
       if(b==0)
        throw 'b';
       try
       {
            
        if(a<0||b<0)
            throw 0;
        else
            cout<<a+b<<endl;
       } 
       catch(int myexp)
       {
        cout<<"Negative values are not allowed.";
       }
    }
    catch(...)
    {
            cout<<"Dividion by Zero !!  Not possible";
    }
    return 0;
}