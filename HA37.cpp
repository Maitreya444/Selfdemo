/*Write a program which accepts two strings from user and concat N characters of second string after first string. 
Value of N should be accepted from user.

Note : If 3rd parametre is greater than the size of second string then concat whole string after first string 

Input : "Marvellous Infosystems"
        "Logic Building"
        5

Output : "Marvellous Infosystems Logic"

*/

#include <iostream>
#include <cstring>
using namespace std;

class Strings 
{
    public:
        char *str1;
        char *str2;
        int iNo;

        Strings(const char *Arr1, const char *Arr2, int iValue) 
        {
            str1 = new char[strlen(Arr1) + 1];
            strcpy(str1, Arr1);

            str2 = new char[strlen(Arr2) + 1];
            strcpy(str2, Arr2);

            iNo = iValue;
        }

        ~Strings() 
        {
            delete[] str1;
            delete[] str2;
        }

        void StrCatX() 
        {
            char *str1_end = str1 + strlen(str1);
            char *str2_temp = str2;

            // If iNo is greater than the length of str2, set iNo to the length of str2
            if (iNo > strlen(str2)) 
            {
                iNo = strlen(str2);
            }

            // Concatenate first iNo characters from str2 to str1
            while (*str2_temp != '\0' && iNo > 0) 
            {
                *str1_end = *str2_temp;
                str1_end++;
                str2_temp++;
                iNo--;
            }

            *str1_end = '\0';

            cout << "Concatenated string: " << str1 << endl;
        }

        bool StrCmpX()
        {
            if(*str1 != *str2)
            {
                return false;
            }

            if(*str1 =='\0' && *str2 =='\0')
            {
                return true;
            }
        }

        bool StrNCmpX()
        {
            if(iNo > 0 && *str1 != '\0' && *str2 !='\0')
            {
                if(*str1 != *str2)
                {
                    return false;
                }
                str1++;
                str2++;
            }
            return true;
        }

        void StrRevTogX()
        {
            char * tempstr1 = str1;

            while(*tempstr1 != '\0')
            {
                tempstr1++;
            }
            tempstr1 --;

            while((tempstr1 >= str1))
            {
                if(*tempstr1 >= 'A' && *tempstr1 <= 'Z')
                {
                    *tempstr1 = *tempstr1 + 32;
                    cout<<*tempstr1; 
                }
                else if(*tempstr1 >='a' && *tempstr1 <= 'z')
                {
                    *tempstr1 = *tempstr1 -32;
                    cout<<*tempstr1;
                }
                *tempstr1--;
            }
        }
};

int main() 
{
    int iValue = 0;
    bool bRet = 0;
    char Arr1[100];
    char Arr2[100];
    bool cRet = 0;

    cout << "Enter First String: ";
    cin.getline(Arr1, 100);

    cout << "Enter Second String: ";
    cin.getline(Arr2, 100);

    cout << "Enter a number till you want to club the strings: ";
    cin >> iValue;

    Strings aobj(Arr1, Arr2, iValue);
    aobj.StrCatX();

    Strings bobj(Arr1, Arr2, iValue);
    bRet = bobj.StrCmpX();

    if(bRet == true)
    {
        cout<<"TRUE"<<"\n";
    }
    else
    {
        cout<<"FALSE"<<"\n";
    }

    Strings cobj(Arr1, Arr2, iValue);
    cRet = cobj.StrNCmpX();

    if(cRet == true)
    {
        cout<<"c TRUE"<<"\n";
    }
    else
    {
        cout<<"c FALSE"<<"\n";
    }


    Strings dobj(Arr1, Arr2, iValue);
    dobj.StrRevTogX();

    return 0;
}