#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("abc.txt",ios::app);
    cout<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close();
    getch();
}