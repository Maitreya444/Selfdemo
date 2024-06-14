/*Write a program which 2 strings from user and check weather first N contents of two strings are equal or not

Note : If 3rd parametre is greater than the size of second string then concat whole string after 1st string.

Input : "Marvellous Infosystems"
      : "Marvellous Logic Building"
      : 10

Output : TRUE

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkStr(char * str1, char * str2, int iNo)
{
    while(iNo > 0 && (*str1 != '\0') && (*str2 !='\0'))
    {
        if(*str1 != *str2)
        {
            return FALSE;
        }
        str1++;
        str2++;
        iNo--;
    }
    //Note
    if(iNo > *str2)
    {   
        while(*str2 !='\0' && iNo > 0)
        {
            *str1 = *str2;
             str1++;
             str2++;
             iNo --;
        }
    }

    return TRUE;
}

int main()
{
    char arr1[30];
    char arr2[30];
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter 1st String \n");
    scanf("%[^\n]%*c", arr1);

    printf("Enter 2nd String \n");
    scanf("%[^\n]%*c", arr2);

    printf("Enter the value you want check the String \n");
    scanf("%d", &iValue);

    bRet = ChkStr(arr1, arr2, iValue);

    if(bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }
    return 0;
}