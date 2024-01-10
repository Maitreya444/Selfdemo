/*Accept Number of rows and columns from user and display below patterns 
Input : iRow = 5
        iCol = 5

Output : a  b   c   d   e   
         1  2   3   4   5   
         a  b   c   d   e
         1  2   3   4   5
         a  b   c   d   e    */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';

    for(i = 1; i<= iRow; i++)
    {
        if(i % 2 !=0)
        {
            for(j = 1; j<= iCol; j++)
            {
                printf("%c\t", ch++);
            }
            printf("\n");
            ch = 'a';
        }
        else
        {
            for(j =1; j<= iCol; j++)
            {
                printf("%d\t", j);
            }
            printf("\n");
        }
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0; 
}