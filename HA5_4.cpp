//Accepts N number from user and print all odd Numbers upto N
//Input : 18
//Output : 1    3   5   7   9   11  13

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt =0; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 !=0)
        {
            cout<<iCnt<<"\t";
        }
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