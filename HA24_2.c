/*Write a program which accept string from user and accept one character. Return frequency of that character

Input : "Airbus A320"

      :  A

Output : 2      */

#include<stdio.h>

int CountChar(char * str, char ch)
{
    int iCount = 0;

    while(*str !='\0')
    {
        if((*str == ch) || (*str == ch +32) || (*str == ch -32))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String \n");
    scanf("%[^'\n']s", arr);

    printf("Enter a Character \n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Count is  : %d ", iRet);

    return 0;
}