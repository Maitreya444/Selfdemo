//Accept Character from user and check wheather it is digit or not (0-9).
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if(ch >=48 && ch <= 57)
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
        printf("It is a Digit \n");
    }
    else
    {
        printf("It is not a Digit \n");
    }

    return 0;
}