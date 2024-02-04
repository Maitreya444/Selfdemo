/*Write a program which accept string from user and count number of small characters*/
#include<stdio.h>

int CountSmall(char * ch)
{
    int iCount = 0;

    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
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

    iRet = CountSmall(words);

    printf("%d\t", iRet);

    return 0;
}