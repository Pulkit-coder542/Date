#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
    void setDimension(int x,int y,int z)
    {l=x; b=y; h=z;}
    void showDimension()
    {cout<<"\nl="<<l<<" b="<<b<<" h="<<h;} 
};
int main()
{
    Box *p,smallbox;
    p=&smallbox;
    p->setDimension(3,4,5);
    p->showDimension();
    getch();
}