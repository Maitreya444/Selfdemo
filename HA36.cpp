/* 36_1 Write a program which accepts N number from user and accept one another number NO, Check wheather NO is present or not

N : 6
NO: 66
Elements : 85   66  3   66  93  88
Output : TRUE
*/

//27 May 1:09:00 LB

#include <iostream>
using namespace std;

class Array
{
public:
    int iSize;
    int *Arr;
    int iCheck;

    Array(int iNo1, int iNo2)
    {
        iSize = iNo1;
        iCheck = iNo2;
        Arr = new int[iSize];
    }

    ~Array()
    {
        delete[] Arr;
    }

    void Accept()
    {
        cout << "Enter the elements: " << "\n";
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Display()
    {
        cout << "Elements of the array are: " << "\n";
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << "\n";
    }

    bool ChkNo()
    {
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if (iCheck == Arr[iCnt])
            {
                return true;
            }
        }
        return false;
    }

    int ChkInx()
    {
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if (iCheck == Arr[iCnt])
            {
                return iCnt;
            }
        }
        return -1;
    }

    int ChkLast()
    {
        int iKeep = -1;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if (iCheck == Arr[iCnt])
            {
                iKeep = iCnt;
            }
        }
        return iKeep;
    }

    void ChkRange(int iStart, int iEnd)
    {
        int iCnt = 0;
        bool found = false;

        cout << "Elements in the range are: ";
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
            {
                cout << Arr[iCnt] << "\n ";
                found = true;
            }
        }
        if (!found)
        {
            cout << "Not found";
        }
        cout << "\n";
    }

    int OddPro()
    {
        int iStore = 1;
        bool found = false;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if (Arr[iCnt] % 2 != 0)
            {
                iStore *= Arr[iCnt];
                found = true;
            }
        }
        return found ? iStore : 0; // Return 0 if no odd number is found
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iStart = 0;
    int iEnd = 0;

    cout << "Enter number of elements: " << "\n";
    cin >> iValue1;

    cout << "Enter the number you want to check: " << "\n";
    cin >> iValue2;

    Array aobj(iValue1, iValue2);
    aobj.Accept();
    aobj.Display();

    bool bRet = aobj.ChkNo();
    int cRet = aobj.ChkInx();
    int dRet = aobj.ChkLast();

    cout << "Enter a starting point: " << "\n";
    cin >> iStart;
    cout << "Enter the ending point: " << "\n";
    cin >> iEnd;

    aobj.ChkRange(iStart, iEnd);

    int gRet = aobj.OddPro();

    if (bRet)
    {
        cout << "TRUE" << "\n";
    }
    else
    {
        cout << "FALSE" << "\n";
    }

    if (cRet != -1)
    {
        cout << "First occurrence index is " << cRet << "\n";
    }
    else
    {
        cout << "Number not found" << "\n";
    }

    if (dRet != -1)
    {
        cout << "Last occurrence index is " << dRet << "\n";
    }
    else
    {
        cout << "Number not found" << "\n";
    }

    cout << "Odd product is: " << gRet << "\n";

    return 0;
}
