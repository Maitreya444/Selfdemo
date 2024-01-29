/*Write a program which accept one number from user and ON its first 4 bit of that number. Return modified number*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OFFBit(UINT iNo)
{
    UINT iMask = 0X0000000F;
    UINT iResult = 0;

    return iResult = iNo | iMask;
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