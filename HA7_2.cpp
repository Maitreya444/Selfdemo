//Write a program which accpet numbers from user and check wheather it contains 0 or not.
//Input : 2395
//Output : No
//Input : 1024
//Output : Yes

#include<iostream>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

using namespace std;

BOOL Check0(int iNo)
{
    int iDigit = 0;
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    cout<<"Enter a Number"<<"\n";
    cin>>iValue;

    bRet = Check0(iValue);

    if(bRet == TRUE)
    {
        cout<<"YES 0 is present"<<"\n";
    }
    else
    {
        cout<<"NO 0 is not present"<<"\n";
    }
    
    return 0;
}