//Accept N numbers from user and display all such elements which are divisible by 5
//Input : N = 6
//Elements = 85 66 3 80 93 88
//Output = 85 80

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
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements "<<"\n";

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

        void Divisible5()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 5 ==0)
                {
                    cout<<Arr[iCnt]<<"\n";
                }
            }
        }
};

int main()
{
    int iNo =0;

    cout<<"Enter the number of elements "<<"\n";
    cin>>iNo;

    Array aobj (iNo);
    aobj.Accept();
    aobj.Display();
    aobj.Divisible5();

    return 0;
}