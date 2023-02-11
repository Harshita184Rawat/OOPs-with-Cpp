#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];
    ifstream infile;
    infile.open("afile.dat", ios::in);
    while(!infile.eof())
    {
        infile>>data;
        cout<<data;
    }
    infile.close();
    return 0;
} 
