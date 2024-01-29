/*Write a program which accept one number and position from user and ON that bit at that position and return modified
number*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iPosition = 0;
    UINT iRet = 0;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    printf("Enter the Position \n");
    scanf("%d", &iPosition);

    iRet = ChkBit(iValue, iPosition);

    printf("%d\t", iRet);

    return 0;
}