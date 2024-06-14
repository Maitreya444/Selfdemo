/*Write a program which accepts two strings from user and concat N characters of second string after first string. 
Value of N should be accepted from user.

Note : If 3rd parametre is greater than the size of second string then concat whole string after first string 

Input : "Marvellous Infosystems"
        "Logic Building"
        5

Output : "Marvellous Infosystems Logic"

*/

#include<stdio.h>

void StrCatX(char * str1, char * str2, int iNo)
{   
    //Counting 2nd string
    int iCount = 0;
    char * str2_temp = str2;

    while(*str2_temp !='\0')
    {
        if((*str2_temp >='A') && (*str2_temp <='z'))
        {
            iCount ++;
        }
        str2_temp++;
    }
    
    //Condition
    if(iNo >= iCount)
    {
        iNo = iCount;
    }

    //Arrive at end of 1st string
    while(*str1 !='\0')
    {
        str1++;
    }

    //Concat
    while(*str2 !='\0' && iNo > 0)
    {
        *str1 = *str2;
        str1++;
        str2++;
        iNo --;
    }

    *str1 = '\0';
}

int main()
{
    char arr1[50];
    char arr2[20];
    int iValue = 0;

    printf("Enter a String 1 : \n");
    scanf("%[^\n]%*c", arr1); 

    printf("Enter a String 2 : \n");
    scanf("%[^\n]%*c", arr2);

    printf("Enter the number till you want to concat 2nd string : \n");
    scanf("%d", &iValue);

    StrCatX(arr1, arr2, iValue);

    printf("Concat is : %s", arr1);

    return 0;
}
