#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;
    public:
    A(int k)
    {a=k;}
    ~A()
    {}
};
class B:public A
{
    public:
    B(int x, int y):A(x)
    {b=y;}
    ~B()
    {}
};
int main()
{
    B obj(2,3);
}
