/*Write a program which accept string from user and convert into upper case
Input : BoEInG
Output : BOEING     */

#include<stdio.h>

void StruprX(char * str)
{
    while(*str !='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;

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

    StruprX(arr);

    return 0;
}