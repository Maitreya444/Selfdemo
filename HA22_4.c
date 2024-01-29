/*Write a program which accept string from user and check wheather it contains vowels or not*/

typedef int BOOL;
#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char * str)
{
    while(*str != '\0' )
    {
        if((*str == 'A') || (*str == 'a') || (*str == 'E') || (*str == 'e') || (*str == 'I') || (*str == 'i') || (*str == 'O') || (*str == 'o') || (*str == 'U') || (*str == 'u'))
        {
            return TRUE;
        }
        str ++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter a String \n");
    scanf("%[^'\n']s", arr);

    bRet = CheckVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel \n");
    }
    else
    {
        printf("Does not contain Vowel \n");
    }
    return 0;
}