//Accept N numbers from user and return the smallest number
//Input : N: 6
//      E: 85   66  3   66  93  88
//Output : 3

#include<iostream>
using namespace std;

class Array
{   
    public:
    int iSize;
    int *Arr;

    Array(int iNo1)
    {
        iSize = iNo1;
        Arr = new int [iSize];
    }

    ~Array()
    {
        delete []Arr;
    }

    void Accept()
    {
        int iCnt = 0;

        cout<<"Enter Elements : "<<"\n";

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;

        cout<<"Elements are : "<<"\n";

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }

    int Max()
    {
        int iCnt = 0;
        int iMin = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }
};

int main()
{
    int iNo1 = 0;
    int iRet = 0;

    cout<<"Enter the number of Elements : "<<"\n";
    cin>>iNo1;

    Array aobj (iNo1);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Max();

    cout<<"Min is : "<<iRet<<"\n";

    return 0;
}