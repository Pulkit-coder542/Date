#include<iostream>
using namespace std;
namespace MySpace{
    int a;
    int f1();;
    class A
    {
        public:
        void fun1();
    };
}
int MySpace::f1() {
    cout<<"Hello f1";
}
void MySpace::A::fun1()
{
    cout<<"\nHello fun1";
}
using namespace MySpace;
int main()
{
    a=5;
    f1();
    A obj;
    obj.fun1();
}