#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int OddCount = 0;
    int EvenCount = 0;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] %2 !=0)
        {
            OddCount = OddCount + Arr[iCnt];
        }
        else if(Arr[iCnt] %2 ==0)
        {
            EvenCount = EvenCount + Arr[iCnt];
        }
    }
    return EvenCount - OddCount;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
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

    iRet = Difference(ptr, iSize);

    printf("Difference is : %d\n", iRet);

    free(ptr);

    return 0;
}