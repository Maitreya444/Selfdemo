//Check Vowels

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char * ch)
{
    while(*ch != '\0')
    {
        if(*ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch =='U' || *ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch =='u')
        {
            return TRUE;
        }
        ch++;
    }
    return FALSE;
}

int main()
{
    char words [20];
    int iRet = 0;

    printf("Enter a String \n");
    scanf("%[^'\n']s", words);

    iRet = ChkVowel(words);

    if(iRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    return 0;
}