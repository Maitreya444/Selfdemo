/*Write a program which accept string from user and accept one character. Check Whether that character is present or not

Input : "Boeing"
        e
Output : TRUE       */

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char * str, char ch)
{
    while(*str != '\0')
    {
        if((*str == ch)|| (*str == ch+32) || (*str == ch-32))
        {
            return TRUE;
        }
        str ++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a String \n");
    scanf("%[^'\n']s",arr);

    // Consume the newline character from the buffer

    //getchar();

    printf("Enter a Character you want to check \n");
    scanf(" %c", &cValue);  //instead give a extra space before %c

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found \n");
    }
    else
    {
        printf("Character not found \n");
    }
    return 0;
}

//When reading a character using scanf("%c", &cValue);, it leaves the newline character in 
//the input buffer. So, when you later use scanf("%[^'\n']s", arr);, it immediately consumes the 
//newline character. To fix this, you can add a space before %c in the second scanf to consume the newline character.