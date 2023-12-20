//Write a program which accepts N and print first 5 Multiples of it
//Input : 4
//Output : 4    8    12     16      20

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= 5; iCnt++)
    {
        cout<<iNo*iCnt<<"\t";
    }
}
int main()
{
    int iValue = 0;
    cout<<"Enter a Number"<<"\n";
    cin>>iValue;

    Pattern(iValue);

    return 0;
}