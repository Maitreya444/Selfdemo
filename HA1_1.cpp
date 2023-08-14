//Program to divide two numbers
#include<iostream>
using namespace std;

int DivideNo(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0);
    {
        cout<<"Enter a non 0 number"<<"\n";

    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter No1"<<"\n";
    cin>>iNo1;

    cout<<"Enter No2"<<"\n";
    cin>>iNo2;
    
    iRet = DivideNo(iNo1, iNo2);

    cout<<"Ans is %d"<<iRet<<"\n";

    return 0;
}