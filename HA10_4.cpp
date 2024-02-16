//Accept N numbers from user and return frequency of 11 from it
//Input : N : 6
//        E : 85 66 3 15 11 11 
//Output : 2

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
                if(Arr[iCnt] == 11)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the Number of Elements : "<<"\n";
    cin>>iNo;

    Array aobj (iNo);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Frequency();

    cout<<"Count is : "<<iRet<<"\n";

    return 0;
}