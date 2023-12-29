/*We have to design application for tourist company
Tourist company provides car on rent.
Depends on the running of car they apply rent.
If running is less than 100 kms then they charge $25/km 
If runnig is more than 100 kms then they apply $15/km after 100 km.
We have to accept number of kms from user and return estimated rent

Input : 73          Output : 1825
Input : 132         Output : 2980
Input : 189         Output : 3835*/

#include<stdio.h>

int Rent(int iNo)
{
    int iResult = 0;

    if (iNo <= 100)
    {
        int Charge = 25;
        iResult = iNo * Charge; 
        return iResult;
    }
    else if (iNo > 100)
    {   
        int Charge1 = 25;
        int Charge2 = 15;
        int Part1 = 100;
        int Part2 = iNo - Part1;

        iResult = Part1 * Charge1 + Part2 * Charge2;
        return iResult;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter for how much km you want our car \n");
    scanf("%d", &iValue);

    iRet = Rent(iValue);

    printf("Rent is : %d\n", iRet);

    return 0;
}