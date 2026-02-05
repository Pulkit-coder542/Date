#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    void setData(int x)
    {a=x;}
    void showData()
    {cout<<"\na="<<a;}
    friend void fun(A,B);
};
class B
{
    private:
    int b;
    public:
    void setData(int y)
    {b=y;}
    void showData()
    {cout<<"\nb="<<b;}
    friend void fun(A,B);
};
void fun(A o1,B o2)
{
    cout<<"sum is "<<o1.a+o2.b;
}
/// @brief 
int main()
{
    A obj1;
    B obj2;
    obj1.setData(2);
    obj2.setData(3);
    fun(obj1,obj2);
    getch();
}