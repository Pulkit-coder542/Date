 #include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;
    public:
    void f1() {}
    virtual ~A() {}
};
class B: public A
{
    int b;
    public:
    void f2() {}
    ~B() {}
};
int fun();
int fun()
{
    B *p=new B;
    p->f1(); //correct
    p->f2(); //error
    delete p;
}
int main()
{
    fun();
}