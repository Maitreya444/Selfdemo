/*Write a program which checks wheather 7th Bit, 15th, 21st, 28th is ON or OFF*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X08104040;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
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
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th, 15th, 21st, 28th Bit is ON \n");
    }
    else
    {
        printf("5th, 15th, 21st, 28th Bit is OFF \n");
    }

    return 0;
}