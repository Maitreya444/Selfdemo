/*Write a program which checks wheather 15th Bit is ON or OFF*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0X00004000;
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
        printf("15th Bit is ON");
    }
    else
    {
        printf("15th Bit is OFF");
    }
    return 0;
}