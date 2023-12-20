//Write a program which accept number from user and print that number of $&* on screen 
//Input : 5
//Output : $&* $&* $&* $&* $&*

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"$   &   *"<<"\t";
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