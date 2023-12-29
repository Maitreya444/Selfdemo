/*Design an application for income tax deparment to calculate tax ammount. According to the income tax deparment
there is no income tax for the income less than 5 lakhs. If income is in between 5 to 10 lakhs then there will be 
10% tax. If income is in between 10 to 20 lakhs then there will be 20% tax. And for more than 20 lakhs there will 
be 30% tax. We have to accept gross income from user and return the tax amount. 

Input : 600000              Output : 10000          (0+10000)
Input : 450000              Output : 0               0
Input : 1200000             Output : 90000          (0+ 50000 + 40000)
Input : 8200000             Output : 2110000        (0 + 50000 + 200000 + 1860000)*/

#include<stdio.h>

float Tax(float iNo)
{
    float fTax = 0.0;
    float Exempt = 0.0;

    if(iNo < 500000)
    {
        return 0;
    }

    else if(iNo > 500000 && iNo <= 1000000)
    {
        Exempt = iNo - 500000;
        fTax = Exempt * 0.10;
        //printf("%f\n", fTax1);
        return fTax;
    }
    else if (iNo > 1000000 && iNo <= 2000000)
    {
        float Part1 = 1000000;
        float Part2 = iNo - Part1;
        float fTax1 = 0.0;
        float fTax2 = 0.0;

        Exempt = Part1 - 500000;
        fTax1 = Exempt * 0.10;
        fTax2 = Part2 * 0.20;
        /*printf("%f\n", fTax1);
        printf("%f\n", fTax2);*/
        return fTax1 + fTax2;
    }
    else if (iNo > 2000000)
    {
        float Part1 = 1000000;
        float Part2 = 1000000;
        float Part3 = iNo - 2000000;
        float fTax1 = 0.0;
        float fTax2 = 0.0;
        float fTax3 = 0.0;

        Exempt = Part1 - 500000;
        fTax1 = Exempt * 0.10;
        fTax2 = Part2 * 0.20;
        fTax3 = Part3 * 0.30;
                
        /*printf("%f\n", fTax1);
        printf("%f\n", fTax2);
        printf("%f\n", fTax3);*/
        return fTax1 + fTax2 + fTax3;
    }
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter your Income \n");
    scanf("%f", &fValue);

    fRet = Tax(fValue);

    printf("Your Tax ammount according to your salary is : %f\n", fRet);

    return 0;

}