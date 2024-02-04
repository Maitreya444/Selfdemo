/*Write a program which accept string from user and count number of small and big characters*/
#include<stdio.h>

int CountSmallBig(char * ch)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            iCount1++;
        }
        else if (*ch >='A' && *ch <= 'Z')
        {
            iCount2++;
        }
        ch++;
    }
    
    return iCount1 - iCount2;
}

int main()
{
    char words [20];
    int iRet = 0;

    printf("Enter a String \n");
    scanf("%[^'\n']s", words);

    iRet = CountSmallBig(words);

    printf("%d\t", iRet);

    return 0;
}