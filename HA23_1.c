/*Write a program which accept string from user and convert into lower case
Input : BoEInG
Output : boeing     */

#include<stdio.h>

void StrlwrX(char * str)
{
    char lwr = '\0';
    char upr = '\0';

    while(*str !='\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {   
            *str = *str + 32;

            printf("%c", *str);
        }
        else
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a String \n");
    scanf("%[^'\n']s", arr);

    StrlwrX(arr);

    return 0;
}