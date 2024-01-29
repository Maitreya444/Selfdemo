/*Write a program which accept string from user return difference between frequency of small characters and frequecy of
capital characters

Input : "MarvellouS"
Output : 6 (8-2)    */

#include<stdio.h>

int Difference(char * str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while(*str !='\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            iCount1++;
        }
        str ++;
    }

    while(*str !='\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            iCount2++;
        }
        str++;
    }

    return iCount1 - iCount2;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a String \n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
