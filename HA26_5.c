/*Write a program which checks wheather first and last bit is ON or OFF. First bit means bit number 1 and last bit
means bit number 32*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
        printf("1st and 32nd Bit is ON \n");
    }
    else
    {
        printf("1st and 32nd Bit is OFF \n");
    }

    return 0;
}