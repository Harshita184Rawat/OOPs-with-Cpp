#include<iostream>
using namespace std;
void printval(int a=67, int b=89, int c=78)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    printval(1,2,3);
    printval(3,5);
    printval();
    return 0;
}
