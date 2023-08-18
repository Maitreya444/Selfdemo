//Write a program which accept number from user and return summation of all its non factors
//Input: 12
//Output: 50

#include<iostream>
using namespace std;

int SumNonFactors(int iNo)
{
    int Add =0;
    int iCnt = 0;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            Add = Add+ iCnt;
        }
    }
    return Add;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    iRet = SumNonFactors(iValue);

    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}