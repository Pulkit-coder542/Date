#include<conio.h>
class Complex
{
    private:
    int a,b;
    public: 
    Complex(int x , int y)
    {a=x; b=y; }
    Complex(int k)
    {a=k;}
    Complex()
    {a=0; b=0;}
    Complex(Complex &c)
    {
        a=c.a;
        b=c.b;
    }
};
int main()
{
    Complex c1(3,4), c2(5), c3;
    getch();
}