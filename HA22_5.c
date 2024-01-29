/*Write a program which accept string from user and display it in reverse order*/

#include<stdio.h>

void Reverse(char * str)
{
    int iCount = 0;

    // Find the length of the string
    while (str[iCount] != '\0')
    {
        iCount++;
    }

    // Reverse the string and print only alphabetic characters
    for (iCount = iCount - 1; iCount >= 0; iCount--)
    {
        if ((str[iCount] >= 'A' && str[iCount] <= 'Z') || (str[iCount] >= 'a' && str[iCount] <= 'z'))
        {
            printf("%c", str[iCount]);
        }
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter String \n");
    scanf("%[^ '\n']s", arr);

    Reverse(arr);

    return 0;
}