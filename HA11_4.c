//Accept N numbers from user and accept Range, Display all elements from that range
//Input : N : 6
//      Start: 60
//       End : 90
//          E: 85 66 3 76 93 88 
//Output : 85 66 76 88

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] <iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *ptr = NULL;

    printf("Enter the Number of Elements \n");
    scanf("%d",&iSize);

    printf("Enter the Start No \n");
    scanf("%d", &iValue1);

    printf("Enter the End No \n");
    scanf("%d", &iValue2);

    ptr = (int *)malloc(iSize * sizeof (int));
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter Elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}