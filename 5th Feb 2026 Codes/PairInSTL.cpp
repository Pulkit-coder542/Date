#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    private:
    string name;
    int age;
    public:
    void setStudent(string s,int x)
    {name=s; age=x;}
    void showStudent()
    {
        cout<<"\nName:"<<name;
        cout<<"\nAge:"<<age;
    }  
};
int main()
{
    pair <string, int>p1;
    pair <string, string>p2;
    pair <string, float>p3;
    pair <int, Student>p4;
    p1=make_pair("Rahul",16);
    p2=make_pair("India","New Delhi");
    p3=make_pair("Drilling C++",345.5f);
    Student s1;
    s1.setStudent("Aishwarya",19);
    p4=make_pair(1,s1);
    cout<<"\nPair 1";
    cout<<"\n"<<p1.first<<" "<<p1.second;
    cout<<"\nPair 2";
    cout<<"\n"<<p2.first<<" "<<p2.second;
    cout<<"\nPair 3";
    cout<<"\n"<<p3.first<<" "<<p3.second;
    cout<<"\nPair 4";
    cout<<"\n"<<p4.first<<" ";
    Student s2=p4.second;
    s2.showStudent();
}