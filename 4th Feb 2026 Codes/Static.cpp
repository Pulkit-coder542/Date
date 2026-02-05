#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
    private:
    int balance; //Instance Member variable
    static float roi; //Static Member variable/Class Variable
    public:
    void setBalance(int b)
    {balance=b;}
    static void setRoi(float r) //Static Member Function
    {roi=r;}
};
float Account:: roi=3.5f;
int main()
{
    Account a1,a2;
    Account::setRoi(4.5f);
}