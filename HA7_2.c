//Write a program which accpet numbers from user and check wheather it contains 0 or not.
//Input : 2395
//Output : No
//Input : 1024
//Output : Yes

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL DisplayDigits(int iNo)
{
    int iDigit = 0;
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;
    printf("Enter digits \n");
    scanf("%d", &iValue);
    bRet = DisplayDigits(iValue);

    if (bRet == TRUE)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}