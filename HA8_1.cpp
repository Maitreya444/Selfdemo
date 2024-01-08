//Write a program which accept number from user and return count of even digit.
//Input : 1234
//Output : 2
#include<iostream>
using namespace std;

class Demo
{
    public :
        int iNo1;
        int iNo2;

        int Check2(int iNo)
        {
            // Handle the case when iNo is 0
            if (iNo == 0)
            {
                return 1; // 0 is considered an even digit
            }

            int iCount = 0;
            int iDigit = 0;

            while(iNo !=0)
            {
                iDigit = iNo % 10;
                if(iDigit %2 ==0)
                {
                    iCount++;
                }
                iNo = iNo / 10;
            }
        return iCount;
        }
};

int main()
{
    //S-1 : Define Obj1
    Demo obj1;
    Demo obj2;

    int iValue = 0;
    int iRet1 = 0;
    int iRet2 = 0;
    cout<<"Enter a Number"<<"\n";
    cin>>iValue;

    //S-2 : Initialize the characterstics of obj
    obj1.iNo1 = iValue;
    obj2.iNo2 = iValue;

    //S-3 : Call Function
    iRet1 = obj1.Check2(obj1.iNo1);
    iRet2 = obj2.Check2(obj2.iNo2);

    cout<<"Count of Even Number for obj1 is :"<<iRet1<<"\n";
    cout<<"Count of Even Number for obj2 is :"<<iRet2<<"\n";

    return 0;
}