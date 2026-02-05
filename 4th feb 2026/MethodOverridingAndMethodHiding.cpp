#include<iostream>
#include<conio.h>
using namespace std;
class Car
{
    public:
    void shiftGear() {}
    void f2() {}
};
class SportsCar:public Car
{
    void shiftGear() {} //Method Overriding
    void f2(int x) {} //Method Hiding
};
int main()
{
    SportsCar obj;
    obj.shiftGear(); //SportsCar
    obj.gearChange(); //SportsCar
    obj.f2(); //error
    obj.f2(4); //SportsCar
    getch();
}