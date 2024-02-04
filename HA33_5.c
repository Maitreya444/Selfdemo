/*Write a program which accept string from user and count number of captital characters*/
#include<stdio.h>

void Reverse(char * ch)
{   
    int iCount = 0;

    while(ch[iCount] != '\0')
    {
        iCount++;
    }

    for(iCount = iCount -1; iCount >=0; iCount--)
    {
        if((ch[iCount] >='A' && ch[iCount] <= 'z'))
        {
            printf("%c", ch[iCount]);
        }
    }
    printf("\n");
}

int main()
{
    char words [20];

    printf("Enter a String \n");
    scanf("%[^'\n']s", words);

    Reverse(words);

    return 0;
}