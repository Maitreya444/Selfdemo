//Accept N numbers from user and return difference between frequency of even numbers and odd numbers
//Input : N : 7
//        E : 85 66 3 80 93 88 90 
//Output : 1(4-3)

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
            int OddCount = 0;
            int EvenCount = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] %2 ==0)
                {
                    EvenCount++;
                }
                else if (Arr[iCnt] %2 !=0)
                {
                    OddCount++;
                }
            }
            return EvenCount- OddCount;
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

    cout<<"Frequency is : "<<iRet<<"\n";

    return 0;
}