/*Accept character from user. If it is capital then display all the characters from the input characters 
till Z. If input character is small then print all the characters in reverse order till a. */

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >='A') && (ch <='Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
    
    else if((ch >='a') && (ch <='z'))
    {
        for(iCnt = ch; iCnt <= 'z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("ENter a Character \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}