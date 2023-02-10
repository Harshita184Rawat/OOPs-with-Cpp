#include<iostream>
using namespace std;

void division()
{
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    if(b==0) throw 0; 
    cout<<"Result of is division is: "<<a/b<<endl;
}
int main()
{
    try
    {
        division();
    }
    catch(int)
    {
        cout<<"Division by 0 is Invalid"<<endl;
        division();
    }
    
    return 0;
}