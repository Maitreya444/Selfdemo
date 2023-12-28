//Accept N numbers from user and display summation of digits of each number 
//Input : N: 6
//        E: 8225   665    3    76     953   858
//        O: 17 17  3   13  17  21

#include <stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iDigit = 0;
    int iStore = 0;
    int iCnt = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigit = Arr[iCnt];

        while(iDigit !=0)
        {
            iNo = iDigit % 10;
            iStore = iStore + iNo;
            iDigit = iDigit / 10;
        }
            printf("%d\t", iStore);
            iStore = 0;
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Number of elements you want to enter \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof (int));

    printf("Enter Elements \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    DigitSum(ptr, iSize);
    
    free(ptr);

    return 0;
}