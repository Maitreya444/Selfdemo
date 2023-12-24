//Accept N numbers from user and display all such elements which are divisible by 5
//Input : N = 6
//Elements = 85 66 3 80 93 88
//Output = 85 80

#include<stdio.h>
#include<stdlib.h>

void Divisible5(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] %5 ==0)
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

    printf("Enter Number of Elements : \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }
    
    Divisible5(ptr, iSize);

    free(ptr);

    return 0;
}