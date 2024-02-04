/*Write a program which accept string from user and count number of captital characters*/
#include<stdio.h>

int CountCapital(char * ch)
{
    int iCount = 0;

    while(*ch != '\0')
    {
        if(*ch >= 'A' && *ch <= 'Z')
        {
            iCount++;
        }
        ch++;
    }
    
    return iCount;
}

int main()
{
    char words [20];
    int iRet = 0;

    printf("Enter a String \n");
    scanf("%[^'\n']s", words);

    iRet = CountCapital(words);

    printf("%d\t", iRet);

    return 0;
}