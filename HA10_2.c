//Accept N numbers from user and return difference between frequency of even numbers and odd numbers
//Input : N : 7
//        E : 85 66 3 80 93 88 90 
//Output : 1(4-3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int ECount = 0;
    int OCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2==0)
        {
            ECount ++;
        }
        else
        {
            OCount ++;
        }
    }
    return ECount - OCount;
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
    if(ptr ==NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    iRet = Difference(ptr, iSize);

    printf("Output is : %d\n", iRet);

    free(ptr);

    return 0;
}