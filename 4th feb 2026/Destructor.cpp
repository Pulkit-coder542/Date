#include<conio.h>
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    ~Complex()
    {cout<<"Destructor";}
};
void fun()
{
    Complex obj;
}
int main()
{
    fun();
    getch();
}