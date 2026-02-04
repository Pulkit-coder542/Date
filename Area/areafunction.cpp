#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main()
{
    int r;
    cout<<"Enter radius of a circle";
    cin>>r;
    cout<<"Area of circle is"<<area(r);
    int l,b;
    cout<<endl<<"Enter the length and breadth of a rectangle";
    cin>>l>>b;
    cout<<"Area  of rectangle is"<<area(l,b);
}
    int area(int L,int B)
    {
        return(L*B);
    }
        float area(int R)
        {
            return(3.14*R*R);
        }