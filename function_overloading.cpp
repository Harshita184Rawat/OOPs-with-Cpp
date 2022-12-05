#include<iostream>
using namespace std;
void display();
void display(int);
void display(int,int);
void display(float);
void display(int,float);
int main()
{
    display();
    display(1);
    display(1,2);
    display(2.5);
    int ii=2;
    float jj=33.4;
    display(ii,jj);
    return 0;
}
void display()
{
    cout<<"function with no argument\n";
}
void display(int)
{
    cout<<"function with one int argument\n";
}
void display(int,int)
{
    cout<<"function with two int  argument\n";
}
void display(float)
{
    cout<<"function with one float argument\n";
}
void display(int,float)
{
    cout<<"function with one int and one float argument\n";
}
