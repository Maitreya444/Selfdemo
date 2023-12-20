//Write a program which accept two numbers and check wheather numbers are equal or not
//Input : 10 10
//Output : Equal
//Input : 69 88
//Output : Not Equal

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    cout<<"Please enter 2 numbers"<<"\n";
    cin>>iValue1;
    cin>>iValue2;

    bRet = ChkEqual(iValue1, iValue2);
    if (bRet == TRUE)
    {
        cout<<"It's Equal"<<"\n";
    }
    else
    {
        cout<<"It's Not Equal"<<"\n";
    }
    return 0;
}