/*Accept Number of rows and number of columns from user and display below pattern
Input : iRow : 4        iCol : 4
Output : 1  2   3   4   
            2   3   4
                3   4   
                    4         */

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
     int i = 0;
     int j = 0;
     int iCount = 0;
     for(i = iRow; i>= 1; i--)   // Outer
    {  //    1         2       3 
        for(j = iCol; j >= 1; j--)  // Inner
        { 
            if(i >= j)
            {   
                iCount++;
                printf("%d\t",iCount);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        iCount = 0;
}
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a number of Rows \n");
    scanf("%d", &iValue1);

    printf("Enter a number of columns \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}