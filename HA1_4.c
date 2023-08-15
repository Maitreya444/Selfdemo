//Accept onr number and check wheather it is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkDivisible(int iNo)
{
    if ((iNo % 5)==0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number \n");
    scanf("%d", &iValue);

    bRet = ChkDivisible(iValue);

    if(bRet == TRUE)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }
    return 0;
}