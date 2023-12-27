//Write a program which accept number from user and display it in reverse order.
//Input : 1234
//Output : 4321

#include<iostream>
using namespace std;

void Reverse(int iNo)
{
    int iDigit = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        cout<<iDigit;
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a Number "<<"\n";
    cin>>iValue;

    Reverse(iValue);

    return 0;
}