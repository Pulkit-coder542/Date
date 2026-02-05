#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x, int y)
    {a=x; b=y;}
    void showData()
    {cout<<"\na="<<a<<"\nb="<<b<<endl;}
    friend void fun(Complex);
};
void fun(Complex c)
{
    cout<<"sum is "<<c.a+c.b;
}
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    fun(c1);
    getch();
}