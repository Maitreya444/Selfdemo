//Write a program which accept three numbers and print its multiplication.
//Input : 5   4   7
//Output : 140

#include<iostream>
using namespace std;

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;
    if (iNo1 != 0) 
    {
        iAns = iAns * iNo1;
    }
    if (iNo2 != 0) 
    {
        iAns = iAns * iNo2;
    }
    if (iNo3 != 0) 
    {
        iAns = iAns* iNo3;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    cout<<"Enter 1st Number"<<"\n";
    cin>>iValue1;
    cout<<"Enter 2nd Number"<<"\n";
    cin>>iValue2;
    cout<<"Enter 3rd Number"<<"\n";
    cin>>iValue3;

    iRet = Multiply(iValue1, iValue2, iValue3);

    cout<<"Multiplication is"<<iRet<<"\n";
}