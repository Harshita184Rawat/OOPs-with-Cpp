// program to check if a number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int number, flag=0;
    cout<<"Enter number: ";
    cin>>number;
    for(int i=2;i<number/2;i++)
    {
         if(number%i==0)
        {
            if(number==i)
                continue;
            else
                break;
                flag=0;
        }
        else
            flag=1;
    }
    if(flag==0)
        cout<<"NOT prime";
    else
        cout<<"Prime";
    return 0;
    
}