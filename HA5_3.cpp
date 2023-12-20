//Write a program which accept number from user and print numbers till that number 
//Input : 4
//Output : -4   -3   -2  -1  0  1   2   3   4

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter a Number"<<"\n";
    cin>>iValue;

    Pattern(iValue);

    return 0;
}