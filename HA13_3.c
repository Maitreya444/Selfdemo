/*Design an application for school management system 
As school is primary there are 4 standards from 1 to 4. School fees of each standard is different. 
For first standard fees are 8900
For Second Standard fees are 12790
For Third Standard fees are 21000
For Fourth Standard fees are 23450
We have to accept standard from user and display the corresponding fees*/

#include<stdio.h>

void Fees(int iNo)
{
    switch(iNo)
    {
        case 1:
        printf("Fees are 8900 \n");
        break;

        case 2:
        printf("Fees are 12790 \n");
        break;

        case 3:
        printf("Fees are 21000 \n");
        break;

        case 4:
        printf("Fees are 23450 \n");
        break;

        default:
        printf("Invalid Input \n");
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Standard \n");
    scanf("%d", &iValue);
    Fees(iValue);

    return 0;
}