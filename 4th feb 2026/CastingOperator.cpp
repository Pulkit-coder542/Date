#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {a=x; b=y;}
    void showData()
    {cout<<"\na="<<a<<" b="<<b;}
    operator int()
    {
        return(a);
    }
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    int x;
    x=c1; //x=c1.operator int();
    cout<<"\nx="<<x;
    getch();
}