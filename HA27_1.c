/*Write a program which accept one number from user and off 7th Bit of that number, if it is ON return modifed number*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OFFBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a Value \n");
    scanf("%d", &iValue);

    iRet = OFFBit(iValue);

    printf("Modified Number is : %d", iRet);

    return 0;
}