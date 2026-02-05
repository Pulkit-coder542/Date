#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l1(11,22,33);
    list<string> l2("India","Kathmandu","Islamabad","Dhaka");
    l2.push_back("Bhopal");
    l2.front_back("Karanchi");
    list<string>::iterator p=l2.begin();
    while(p!=l2.end()) {
        cout<<*p<<" ";
        p++;
    }
    cout<<"Total values in the list area "<<l2.size();
}