/*Write a program which accept one number and position from user wheather bit at that position is ON or OFF. 
If Bit is 1 return TRUE, else return FALSE*/

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

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
    UINT iPosition = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    printf("Enter the Position \n");
    scanf("%d", &iPosition);

    bRet = ChkBit(iValue, iPosition);

    if(bRet = TRUE)
    {
        printf("TRUE \n");
    } 
    else
    {
        printf("FALSE \n");
    }

    return 0;
}