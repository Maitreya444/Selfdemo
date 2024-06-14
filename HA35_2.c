#include<stdio.h>

int OddCount(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 !=0)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter a Number \n");
  scanf("%d", &iValue);

  iRet = OddCount(iValue);

  printf("Odd count is : %d\t", iRet);

  return 0;  
}