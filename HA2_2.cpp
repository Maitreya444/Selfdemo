//Accpet one number from user and if that number is < 10 then print Hello else print Demo

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo <= 10)
    {
        cout<<"Hello"<<"\n";
    }
    else
    {
        cout<<"Demo"<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}