/*Write a program which accpet string from user and toggle the case
Input : "AirBUS"
Output : "aIRbus"   */

#include<stdio.h>

void StrtoggleX(char * str)
{
    while(*str !='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;

            printf("%c", *str);
        }
        else if ((*str >='A') && (*str <= 'Z'))
        {   
            *str = *str + 32;
            
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

    StrtoggleX(arr);

    return 0;
}