//Accept N numbers from user and accept one another number as NO, return index of last occourence of that NO
//Input : N : 6
//       NO : 66
//        E : 85    66     3    66      93      88
//Output : 3

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int iChoice;
        int *Arr;

        Array(int iNo1, int iNo2)
        {
            iSize = iNo1;
            iChoice = iNo2;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter Elements : "<<"\n";

            for(iCnt =0 ; iCnt < iSize; iCnt++)
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

        int FirstOccourance()
        {
            int iCnt = 0;
            int index = -1;
            int iCount = 0;

            for(iCnt =0; iCnt < iSize; iCnt++)
            {
                iCount ++;

                if(Arr[iCnt] == iChoice)
                {
                    index = iCnt;
                    continue;
                }
            }
            return index;
        }
};

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter Number of Elements : "<<"\n";
    cin>>iNo1;

    cout<<"Enter Number you want to check : "<<"\n";
    cin>>iNo2;

    Array aobj(iNo1, iNo2);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.FirstOccourance();

    cout<<"Index is : "<<iRet<<"\n";

    return 0;
}