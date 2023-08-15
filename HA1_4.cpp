//Accept onr number and check wheather it is divisible by 5 or not
#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkDivisible(int iNo)
{
    if ((iNo % 5)==0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    bRet = ChkDivisible(iValue);

    if(bRet == TRUE)
    {
        cout<<"It is divisible by 5"<<"\n";
    }
    else
    {
        cout<<"It is not divisible by 5"<<"\n";
    }
    return 0;
}