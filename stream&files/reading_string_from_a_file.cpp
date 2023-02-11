// program to read string from a file (named "afile.dat")
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string data;
    ifstream infile;
    infile.open("afile.dat",ios::in);
    while (getline(infile,data))
    {
        cout<<data<<endl;
    }
    infile.close();
    return 0;
}