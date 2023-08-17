//Accept number from user and check wheather it is even or odd

#include<iostream>
using namespace std;
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkNo(int iNo)
{
    if((iNo %2)==0)
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
    bool bRet = FALSE;

    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    bRet = ChkNo(iValue);

    if(bRet == TRUE)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }

    return 0;
}