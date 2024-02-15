/*Accept N numbers from user and return difference between summation of even elements and summation of even elements and
summation of odd elements.
Input :-  N : 6
Elements :- 85   66  3   80  93  88
Output :- 53 (234 - 181) */

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete[]Arr;
        }

        void Accept()
        {
            cout<<"Enter the Elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of Array are : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
        
        int Summation()
        {
            int iSumE = 0;
            int iSumO = 0;
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] %2 ==0)
                {
                    iSumE = iSumE + Arr[iCnt];
                }
                else
                {
                    iSumO = iSumO + Arr[iCnt];
                }
            }
            return iSumE- iSumO;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number of elements : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();

    iRet = aobj.Summation();
    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}