//Write a program which accept number from user and check wheather it is greater than 100 or not
//Input : 11 Smaller
//Output : 520 Greater

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkNo(int No)
{
    if(No <= 100)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number \n");
    scanf("%d", &iNo);

    bRet = ChkNo(iNo);

    if(bRet == FALSE)
    {
        printf("SMALLER");
    }
    else
    {
        printf("GREATER");
    }
    return 0;
}