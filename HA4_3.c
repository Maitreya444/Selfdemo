//Write a program which accept two numbers and check wheather numbers are equal or not
//Input : 10 10
//Output : Equal
//Input : 69 88
//Output : Not Equal

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter 2 numbers \n");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);
    if (bRet == TRUE)
    {
        printf("It's Equal \n");
    }
    else
    {
        printf("It's Not Equal \n");
    }
    return 0;
}