//Accept N numbers from user and return frequency of 11 from it
//Input : N : 6
//        E : 85 66 3 15 11 11 
//Output : 2

#include<stdio.h>
#include<stdlib.h>

int Fequency11(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    printf("Enter the Number of elements \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof (int));
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    iRet = Fequency11(ptr, iSize);

    printf("Frequency of 11 is : %d\n",iRet);

    free(ptr);

    return 0;
}