//Write a program which accept number from user and return difference between summation of all its factors and non factors
//Input :12
//Output: -34       (16-50)
#include <iostream>
using namespace std;

int SumAll(int iNo) {
    int iCnt = 0;
    int SumFactor = 0;
    int SumNonFactor = 0;
    int All = 0;

    for (iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {
        if ((iNo % iCnt) == 0) 
        {
            SumFactor = SumFactor + iCnt;
        } 
        else 
        {
            SumNonFactor = SumNonFactor + iCnt;
        }
    }

    All = SumNonFactor - SumFactor;

    return All;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number:"<<"\n";
    cin>>iValue;

    iRet = SumAll(iValue);

    cout<<"Difference is : "<<iRet<<"\n";

    return 0;
}
