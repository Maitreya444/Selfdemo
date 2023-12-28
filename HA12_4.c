//Accept N numbers from user and display al such numbers which contains 3 digits in it
//Input : N: 6
//        E: 8225   665    3    953    858
//Output : 665  953   858

#include<stdio.h>
#include<stdlib.h>

void Occorunce3Digit(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t", Arr[iCnt]);
        }
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

    Occorunce3Digit(ptr, iSize);
    
    free(ptr);

    return 0;
}