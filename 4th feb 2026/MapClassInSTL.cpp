#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,string> customer;
    customer[100]="Gajendra";
    customer[123]="Dilip";
    customer[145]="Aditya";
    customer[171]="Sahid";
    customer[200]="Rajesh";
    map <int,string> c { {100,"Gajendra"},{123,"Dilip"},{145,"Aditya"},{175,"Sahid"},{200,"Rajesh"} };
    map <int,string>::iterator p= customer.begin();
    while(p!=customer.end() ) {
        cout<<p->second<<endl;
        p++;
    }
}