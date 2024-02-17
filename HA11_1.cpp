//Accept N Numbers from user and accept one another number as NO, check wheather NO is present or not
//Input : N : 6
//      NO : 66
//      E : 85  66  3   66  93  88
//Output : TRUE

#include<iostream>
using namespace std;

class Array
{   
    public:
        int iSize;
        int iChoose;
        int *Arr;

        Array(int iNo1, int iNo2)
        {
            iSize = iNo1;
            iChoose = iNo2; 
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete [] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter The Elements : "<<"\n";

            for(iCnt =0; iCnt < iSize; iCnt++)
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

        bool ChkNumber()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iChoose)
                {
                    return true;
                    break;
                }
            }
            return false;
        }
};

int main()
{
    int Size = 0;
    int Check = 0;
    bool iRet = false;

    cout<<"Enter the Number of Elements : "<<"\n";
    cin>>Size;

    cout<<"Enter the Number you want to check : "<<"\n";
    cin>>Check;

    Array aobj(Size, Check);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.ChkNumber();

    if(iRet == true)
    {
        cout<<"TRUE"<<"\n";
    }
    else
    {
        cout<<"FALSE"<<"\n";
    }
    return 0;
}