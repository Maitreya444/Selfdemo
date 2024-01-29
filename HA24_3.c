/*Write a program which  accept string from user and accept one character. Return index of first occourance of that character

Input : Embrarer
    
      : m

Output : 1      */

#include<stdio.h>

int CountIndex(char * str, char ch)
{
    int iCnt = 0;

    while(*str !='\0')
    {
        for(iCnt = 0; iCnt <= *str-1; iCnt++)
        {
            if(*str == ch)
            {
                return iCnt;
                break;
            }
            else
            {
                return -1;
            }
            str++;
        }        
    }   
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

    iRet = CountIndex(arr, cValue);

    printf("Count is  : %d ", iRet);

    return 0;
}
