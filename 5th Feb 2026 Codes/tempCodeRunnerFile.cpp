#include<iostream>
using namespace std;
void swap(int *a, int *b);
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"\nBefor swap a = "<<a<<" b = "<<b;
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\nAfter swap a = "<<*a<<" b = "<<*b;
}