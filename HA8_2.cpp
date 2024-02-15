//Write a program which accept number from user and return count of odd digit.
//Input : 1234
//Output : 2

#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

    Digit(int X)    //Parametrised Constructor
    {
        iNo = X;
    }

    int OddDigits()
    {   
        int iDigit = 0;
        int iCount = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit %2 !=0)
            {
                iCount++;
            }
            iNo = iNo /10;
        }
        return iCount;
    }

    int EvenDigits()
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit %2 ==0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
};

int main()
{
    int iValue1 = 0;
    int iRet1 = 0;
    int iRet2 = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue1;

    Digit dobj1(iValue1);
    Digit dobj2(iValue1);

    iRet1 = dobj1.OddDigits();
    iRet2 = dobj2.EvenDigits();

    cout<<"Odd digits are : "<<iRet1<<"\n";
    cout<<"Even digits are : "<<iRet2<<"\n";

    return 0;
}