//Accept Character from user and wheather it small case or not (a-z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if(ch >=97 && ch <= 122)
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
        printf("It is a small character \n");
    }
    else
    {
        printf("It is not a small character \n");
    }

    return 0;
}