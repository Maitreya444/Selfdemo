//Accept single digit number from user and print into word.
#include<iostream>
using namespace std;

void Digit(int iNo)
{
    if(iNo == 1)
    {
        cout<<"One";
    }
    else if(iNo ==2)
    {
        cout<<"Two";
    }
    else if(iNo == 3)
    {
        cout<<"Three";
    }
    else if (iNo == 4)
    {
        cout<<"Four";
    }
    else if(iNo == 5)
    {
        cout<<"Five";
    }
    else if (iNo ==6)
    {
        cout<<"Six";
    }
    else if (iNo == 7)
    {
        cout<<"Seven";
    }
    else if(iNo == 8)
    {
        cout<<"Eight";
    }
    else if(iNo == 9)
    {
        cout<<"Nine";
    }
    else if (iNo >10)
    {
        cout<<"Invalid";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter a Number"<<"\n";
    cin>>iValue;

    Digit(iValue);

    return 0;
}