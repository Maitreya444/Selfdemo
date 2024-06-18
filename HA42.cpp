#include<iostream>
using namespace std;

class Array
{
    public:
    int iSize1;
    int iSize2;
    int *Arr1;
    int *Arr2;

    Array (int iNo1, int iNo2)
    {
        iSize1 = iNo1;
        iSize2 = iNo2;
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    ~Array()
    {
        delete []Arr1;
        delete []Arr2;
    }

    void Accept()
    {
        int iCnt = 0;
        cout << "Enter the elements in Array 1 : " << "\n";
        for(iCnt = 0; iCnt < iSize1; iCnt++)
        {
            cin>>Arr1[iCnt];
        }
        cout<<"\n";

        cout << "Enter the elements in Array 2 : " << "\n";
        for(iCnt = 0; iCnt < iSize2; iCnt++)
        {
            cin>>Arr2[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;

        cout<<"Elements from Array 1 are : "<<"\n";
        for(iCnt = 0; iCnt < iSize1; iCnt++)
        {
            cout<<Arr1[iCnt]<<" ";
        }
        cout<<"\n";

        cout<<"Elements from Array 2 are : "<<"\n";
        for(iCnt = 0; iCnt < iSize2; iCnt++)
        {
            cout<<Arr2[iCnt]<<" ";
        }
        cout<<"\n";
    }

    void EvenElements()
    {
        int iCnt = 0;

        cout<<"Even Elements from Array 1 are : "<<"\n";
        for(iCnt = 0; iCnt < iSize1 ; iCnt++)
        {
            if(Arr1[iCnt] %2 ==0)
            {
                cout<<Arr1[iCnt]<<" ";
            }
        }
        cout<<"\n";

        cout<<"Even Elements from Array 2 are : "<<"\n";
        for(iCnt = 0; iCnt < iSize2 ; iCnt++)
        {
            if(Arr2[iCnt] %2==0)
            {
                cout<<Arr2[iCnt]<<" ";
            }
        }
        cout<<"\n";
    }

    void OddElements()
    {
        int iCnt = 0;

        cout<<"Odd Elements from Array 1 are : "<<"\n";
        for(iCnt = 0; iCnt < iSize1 ; iCnt++)
        {
            if(Arr1[iCnt] %2 !=0)
            {
                cout<<Arr1[iCnt]<<" ";
            }
        }
        cout<<"\n";

        cout<<"Odd Elements from Array 2 are : "<<"\n";
        for(iCnt = 0; iCnt < iSize2 ; iCnt++)
        {
            if(Arr2[iCnt] %2 !=0)
            {
                cout<<Arr2[iCnt]<<" ";
            }
        }
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the elements you want to enter in Array 1 : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the elements you want to enter in Array 2 : "<<"\n";
    cin>>iValue2;

    Array aobj(iValue1, iValue2);
    aobj.Accept();
    aobj.Display();
    aobj.EvenElements();
    aobj.OddElements();
}