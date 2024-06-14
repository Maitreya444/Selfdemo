/*Take two strings from user and check whether they are equal or not*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEqual(char * str1, char * str2)
{
    while((*str1 != '\0') && (*str2 !='\0'))
    {
        if (*str1 != *str2)
        {
            return FALSE;
        }
        str1 ++;
        str2 ++;
    }

    if((*str1 =='\0') && (*str2 =='\0'))
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
    char ch1[20];
    char ch2[20];
    BOOL bRet = FALSE;

    printf("Enter the First String \n");
    scanf("%[^\n]%*c", ch1);

    printf("Enter the Second String \n");
    scanf("%[^\n]%*c", ch2);

    bRet = ChkEqual(ch1, ch2);

    if(bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    return 0;
}