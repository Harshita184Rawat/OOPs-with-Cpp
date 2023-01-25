#include<iostream>
using namespace std;
class student
{
    static int id;
    static int reg_no;
    int standard;
    string name;
    public:
    student()
    {
        standard=1;
    }
    ~student()
    {
        cout<<"Student id is deleted.";
    }
    void print_id()
    {
        cout<<"Student id is "<<id<<endl;
        id++;
    }
    void print_reg()
    {
        cout<<"Registration number is "<<reg_no<<endl;
        reg_no++;
    }
    void print_name();
}s1,s2,s3,s4;
void student:: print_name()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"student name is "<<name<<endl;

}
int student:: id=1;
int student:: reg_no=2100;
int main()
{
    s1.print_id();
    s1.print_name();
    s1.print_reg();
    s2.print_id();
    s2.print_name();
    return 0;
}
