/*Write a program which accept string from user and display only digits from that string
Input : Airbus A320
Output : 320*/

#include<stdio.h>

void DisplayDigit(char * str)
{
    while(*str !='\0')
    {
        if((*str >= '0') && (*str <= '9'))
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

    DisplayDigit(arr);

    return 0;
}