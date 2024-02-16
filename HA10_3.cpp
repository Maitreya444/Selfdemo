//Accept N numbers from user and check wheather that number contains 11 or not
//Input : 6 
//     E: 85 66 11 80 93 88 
//Output : 11 is Present

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
            Arr = new int [iSize];
        }

        ~Array()
        {
            delete [] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter Elements : "<<"\n";

            for(iCnt = 0; iCnt< iSize; iCnt++)
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

        int Present11()
        {
            int iCnt = 0;
            int flag = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == 11)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter Number of Elements : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Present11();

    if(iRet == true)
    {
        cout<<"11 is present "<<"\n";
    }
    else
    {
        cout<<"11 is Absent "<<"\n";
    }
}