/*Write a program which  accept string from user and accept one character. Return index of last occourance of that character

Input : Embrarer
    
      : r

Output : 7      */

#include<stdio.h>

int CountIndex(char * str, char ch)
{
     int iCnt = 0;
     int iCount = 0;

     while(str[iCnt] != '\0')
     {
        if((str[iCnt] == ch) || (str[iCnt] == ch +32) || (str[iCnt] == ch -32))
            {
                 iCount = iCnt;  // Calculate the index using pointer arithmetic
            }
        iCnt++;
    }
    return iCount;
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
