#include<iostream>
using namespace std;

int a,b;
void check_negative(int a,int b)
{
    
    if(a<0||b<0) throw 1;
}

void division()
{
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    if(b==0) throw 0; 
    cout<<"Result of is division is: "<<a/b<<endl;
    try
    {
        check_negative(a,b);
    }
    catch(int)
    {
        cout<<" NEGATIVE value entered"<<endl;
    }
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