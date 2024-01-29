/*Write a program which accept a string from user and count number of white spaces
Input : Airbus
Outbut : 0

Input : Airbus A320
Output : 1

Input : Boeing 737 Max
Output : 2  */

#include<stdio.h>

int CountSpaces(char * str)
{
    int iCount = 0;

    while(*str !=0)
    {
        if((*str == ' '))
        {
            iCount ++;
        }
        str ++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a String \n");
    scanf("%[^'\n']s", arr);

    iRet = CountSpaces(arr);

    printf("%d", iRet);

    return 0;
}