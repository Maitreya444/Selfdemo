//Write a program which accept number from user and check wheather it is greater than 100 or not
//Input : 11 Smaller
//Output : 520 Greater

#include<iostream>
#include<stdbool.h>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

template <class T>
T ChkNum(T iNo)
{
    if(iNo <= 100)
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
    BOOL iRet = false;

    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    iRet = ChkNum(iValue);

    if(iRet == TRUE)
    {
        cout<<"Smaller \n";
    }
    else
    {
        cout<<"Greater \n";
    }
    return 0;
}
