//Accept N numbers from user and return frequency of even numbers 
//Input : N : 6
//Elements : 85 66 3 80 93 88
//Output : 3

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
            
            //Same in JAVA
            Arr = new int [iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Number of Elements : "<<"\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements are : "<<"\n";

            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int EvenFrequency()
        {
            int iCount = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] %2 ==0)
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
    iRet = aobj.EvenFrequency();

    cout<<"Even Frequency Count is : "<<iRet<<"\n";

    return 0;
}