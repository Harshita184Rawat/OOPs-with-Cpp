// program to print prime numbers in a given range (a to b)

#include<iostream>
using namespace std;
int main()
{
    int  i,j,a,b,flag=1;
    cout<<"Enter values of a and b: "<<endl;
    cin>>a>>b;
    cout<<"prime numbers in the given range are: ";
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            cout<<i<<"  ";
        
    }
    
    return 0;
}