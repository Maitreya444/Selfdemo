//Write a program which accept number from user and return the count of digits in between 3 & 7.
//Input : 2395
//Output : 1

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
    
    int Check3and7()
    {
        int iDigit = 0;
        int iCount = 0;
        
        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit >3 && iDigit <=7)
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
    int iValue = 0;
    int iRet = 0;   

    cout<<"Enter a Number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.Check3and7();
    cout<<"Count is : "<<iRet<<"\n";

    return 0;
}