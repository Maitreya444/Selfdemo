//Accept N numbers from user and accept another number as NO, return frequency of NO from it
// N : 6
// NO : 66
// E : 85 66 3 66 93 88

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int iChoice;
        int *Arr;

        Array(int iNo, int iCheck)
        {
            iSize = iNo;
            iChoice = iCheck;
            Arr = new int [iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements : "<<"\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements are : "<<"\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Frequency()
        {
            int iCount = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iChoice)
                {
                    return true;
                    break;
                }
            }
        }
};

int main()
{
    int iNo = 0;
    int iNo2 = 0;
    bool iRet = 0;

    cout<<"Enter the Number of Elements : "<<"\n";
    cin>>iNo;

    cout<<"Enter Number you want to check : "<<"\n";
    cin>>iNo2;

    Array aobj (iNo, iNo2);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Frequency();

    if(iRet == true)
    {
        cout<<"Present"<<"\n";
    }
    else
    {
        cout<<"Absent"<<"\n";
    }
    return 0;
}