//Write a program which accept number from user and if number is les than 50 then print small, if it is greater 
//than 50 and less than 100 then print medium, if its greater than 100 then print large.

#include<iostream>
using namespace std;

void Number(int iNo)
{
    if(iNo <= 50)
    {
        cout<<"Small"<<"\n";
    }
    else if(iNo > 50 && iNo <=100)
    {
        cout<<"Medium"<<"\n";
    }
    else
    {
        cout<<"Greater"<<"\n";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    Number(iValue);

    return 0;
}