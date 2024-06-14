#include<iostream>
using namespace std;

class Digits
{
    public:
        int iNo;

    Digits(int X)   //Parametrised Constructor
    {
        iNo = X;
    }

    int EvenDigits()
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 ==0)
            {
                iCnt ++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int OddDigits()
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 !=0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int CountRange()
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit >=3 && iDigit <=7)
            {
                iCnt ++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int Multiply()
    {
        int iDigit = 0;
        int iCnt = 1;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit !=0)
            {   
                iCnt = iDigit * iCnt;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int Summation()
    {
        int iDigit = 0;
        int iOdd = 0;
        int iEven = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 ==0)
            {
                iEven = iEven + iDigit;
            }

            else if(iDigit % 2 !=0)
            {
                iOdd = iOdd + iDigit;
            }

            iNo = iNo / 10;
        }
        return iEven - iOdd;
    }
};

int main()
{
    int iValue1 = 0;
    int iRet1 = 0;
    int iRet2 = 0;
    int iRet3 = 0;
    int iRet4 = 0;
    int iRet5 = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue1;

    Digits dobj1(iValue1);
    Digits dobj2(iValue1);
    Digits dobj3(iValue1);
    Digits dobj4(iValue1);
    Digits dobj5(iValue1);

    iRet1 = dobj1.EvenDigits();
    iRet2 = dobj2.OddDigits();
    iRet3 = dobj3.CountRange();
    iRet4 = dobj4.Multiply();
    iRet5 = dobj5.Summation();

    cout<<"Even Digits are : "<<iRet1<<"\n";
    cout<<"Odd Didgits are : "<<iRet2<<"\n";
    cout<<"Number between 3 & 7 are : "<<iRet3<<"\n";
    cout<<"Multiplication of Digits are : "<<iRet4<<"\n";
    cout<<"Summation of Even and ODD Digits are : "<<iRet5<<"\n";

    return 0;
}