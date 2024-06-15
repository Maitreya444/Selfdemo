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
};

int main() 
{
    int iValue = 0;
    char Arr1[100];
    char Arr2[100];

    cout << "Enter First String: ";
    cin.getline(Arr1, 100);

    cout << "Enter Second String: ";
    cin.getline(Arr2, 100);

    cout << "Enter a number till you want to club the strings: ";
    cin >> iValue;

    Strings aobj(Arr1, Arr2, iValue);
    aobj.StrCatX();

    return 0;
}