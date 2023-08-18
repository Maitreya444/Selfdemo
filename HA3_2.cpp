//Write a program which accept number from user and display its factors in descending order
//Input : 12
//Output: 6   4   3   2   1   
#include<iostream>
using namespace std;

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo/2 ; iCnt > 0 ; iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            cout<<iCnt<<"\n";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a nuymber"<<"\n";
    cin>>iValue;

    FactRev(iValue);

    return 0;
}