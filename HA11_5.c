//Accept N numbers from user and accept Range, Display the products of odd nos.
//Input : N : 6
//          E: 15 66 3 76 94 88 
//Output : 45

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 !=0)
        {
            iProduct = iProduct* Arr[iCnt] ;
        }
    }
    return iProduct;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of Elements \n");
    scanf("%d",&iSize);

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

    iRet = Product(ptr, iSize);

    printf("Product of Odd elements is %d\n", iRet);

    free(ptr);

    return 0;
}