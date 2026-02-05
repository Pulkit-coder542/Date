#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=3;
    cout<<"WELCOME";
    try{
        if(i==1)
        cout<<"\nIn Try";
    }
    catch(int e) {
        cout<<"\nException no: "<<e;
    }
    cout<<"\nLast line";
    getch();
}