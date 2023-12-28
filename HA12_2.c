//Accept N numbers from user and return the smallest number
//Input : N: 6
//      E: 85   66  3   66  93  88
//Output : 93

#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof (int));

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the Array are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    iRet = Min(ptr, iSize);

    printf("Min is : %d\n", iRet);

    free(ptr);

    return 0;
}