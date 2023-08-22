//Write a program which accept number from user and return difference between summation of all its factors and non factors
//Input :12
//Output: -34       (16-50)

#include<iostream>
using namespace std;

class Factors
{
    public:
        int No;
    
    public:
        Factors()
        {
            No = 0;
        }
        int DoFactors()
        {
            int iCnt = 0;
            int SumFactor = 0;
            int SumNonFactor = 0;
            int All = 0;

            for (iCnt = 1; iCnt <= No/2; iCnt++) 
            {
                if ((No % iCnt) == 0) 
                {
                    SumFactor = SumFactor + iCnt;
                } 
                else 
                {
                    SumNonFactor = SumNonFactor + iCnt;
                }
            }

            All = SumNonFactor - SumFactor;

            return All;
        }
};

int main()
{   
    Factors obj1;
    int Ret = 0;
    cout<<"Enter Number 1"<<"\n";
    cin>>obj1.No;

    Ret = obj1.DoFactors();
    cout<<"Summation Factors is: "<<Ret<<"\n";

    return 0;
}