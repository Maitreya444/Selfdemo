//Write a program which accept number from user and check wheather it is greater than 100 or not
//Input : 11 Smaller
//Output : 520 Greater

#include<iostream>
#include<stdbool.h>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkNo(int No)
{
    if(No <= 100)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    cout<<"Enter a number"<<"\n";
    cin>>iNo;

    bRet = ChkNo(iNo);

    if(bRet == FALSE)
    {
        cout<<"SMALLER";
    }
    else
    {
        cout<<"GREATER";
    }
    return 0;
}