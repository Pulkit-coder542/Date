#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    Complex() {} //default constructor
    Complex(int k)
    {a=k; b=0;}
    void setData(int x,int y)
    {a=x; b=y;}
    void showData()
    {cout<<"\na="<<a<<" b="<<b;}
};    
int main()
{
    Complex c1;
    int x=5;
    c1=x;
    c1.showData();
    getch();
}