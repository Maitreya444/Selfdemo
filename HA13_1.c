/*Design an application for hotel. According to the management team of the hotel they are giving discount on total bill 
ammount of customer.
If the bill amount is less than 500 then there is no discount, if bill amount is less than 1500 and more than 500 
they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have to return the amount after
applying the amount. 

Input: 1200    Output: 1080
Input: 290     Output: 290
Input: 3700    Output: 3145 */

#include<stdio.h>

float CalculateDiscount(float iNo)
{
    float Discount = 0.0;
    float NewPrice = 0.0;

    if(iNo > 0 && iNo <=500)
    {
        return iNo;
    }
    else if (iNo > 500 && iNo <1500)
    {
        Discount = iNo * 0.10;
        NewPrice = iNo - Discount;
        return NewPrice;
    }
    else if(iNo >=1500)
    {
        Discount = iNo * 0.15;
        NewPrice = iNo - Discount;
        return NewPrice;
    }
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Please Enter Total Expenditure of the Customer \n");
    scanf("%f", &fValue);

    fRet = CalculateDiscount(fValue);

    printf("Price after applying discount is : %f\n", fRet);

    return 0;
}