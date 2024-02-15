#include<stdio.h>
#include<stdlib.h>

void Multiples11(int Arr[], int iLength)
{
    int iCnt = 0;
    
    printf("Multiples of 11 are : ");
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {   
        if(Arr[iCnt] %11==0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    Multiples11(ptr, iSize);

    free(ptr);

    return 0;
}