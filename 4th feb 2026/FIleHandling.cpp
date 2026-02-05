#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.dat");
    fout<<"hello";
    getch();
}