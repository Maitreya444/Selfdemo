//Accept N numbers from user and return frequency of even numbers 
//Input : N : 6
//Elements : 85 66 3 80 93 88
//Output : 3

#include<stdio.h>
#include<stdlib.h>

int EvenFrequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iCount ++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter number of elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }
    
    iRet = EvenFrequency(ptr, iSize);

    printf("Even Elements are : %d\n",iRet);

    free(ptr);

    return 0;
}