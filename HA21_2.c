/*Accept character from user. If character is small display its corresponding capital character
and if it is small then display its corresponding capital. In other cases display as it is

Input : Q
Output : q

Input : 4
Output : 4*/

#include<stdio.h>

void Display(char ch)
{
    char uwr = '\0';
    char lwr = '\0';

    if((ch >='A') && (ch <='Z'))
    {
        uwr = uwr + ch;
        lwr = uwr + 32;
        printf("%c\t", lwr);
    }
    else if ((ch >= 'a') && (ch <='z'))
    {
        lwr = lwr + ch;
        uwr = lwr - 32;
        printf("%c\t", uwr);
    }
    else
    {
        printf("%c\t", ch);
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