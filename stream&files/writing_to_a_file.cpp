#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream outfile;
   outfile.open("afile.dat",ios::app);
   outfile<<"This is the first line of file"<<endl;
   outfile.close();
    return 0;
}
