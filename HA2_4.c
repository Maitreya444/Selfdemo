//Accept number from user and check wheather it is even or odd

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkNo(int iNo)
{
    if((iNo %2)==0)
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
    bool bRet = FALSE;

    printf("Enter a number \n");
    scanf("%d",&iValue);

    bRet = ChkNo(iValue);

    if(bRet == TRUE)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}