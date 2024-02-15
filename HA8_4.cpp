//Write a program which accept number from user and return multiplication of all digits
//Input : 2395
//Output : 270

#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

    Digit(int X)
    {
        iNo = X;
    }

    int Multiple()
    {
        int iMult = 1;
        int iDigit = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            iMult = iMult* iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a Number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.Multiple();

    cout<<"Multiples of Digit are : "<<iRet<<"\n";

    return 0;    
}