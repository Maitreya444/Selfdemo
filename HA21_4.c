/*Accept Character from user and check wheather it is special symbol or not (!,@,#,$,%,^,&,*)*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckSymbol(char ch)
{
    if(ch >= '!' && ch <= '*')
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

    bRet = CheckSymbol(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character \n");
    }

    return 0;
}