//Accept two numbers from user and display first number in second number of times
//Input : 12    5   
//Output: 12    12  12  12  12
#include<iostream>
using namespace std;

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt =1; iCnt<=iNo2; iCnt++)
    {
        cout<<iNo1<<"\n";
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter a number 1"<<"\n";
    cin>>iValue1;

    cout<<"Enter a number 2"<<"\n";
    cin>>iValue2;

    Display(iValue1, iValue2);

    return 0;
}