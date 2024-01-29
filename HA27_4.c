/*Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OFFBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    UINT iResult = 0;

    return iResult = iNo ^ iMask;
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