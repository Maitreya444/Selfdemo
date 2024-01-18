//Accept Character from user and check wheather it is capital or not (A-Z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if(ch >=65 && ch <= 90)
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character \n");
    scanf("%c", &cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a captial character \n");
    }
    else
    {
        printf("It is not a captial character \n");
    }

    return 0;
}