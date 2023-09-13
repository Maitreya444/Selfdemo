//Write a program which accept name from user and print that name.
//Input : Maitreya Gangurde  Output : Maitreya Gangurde
#include <iostream>
using namespace std;

int main()
{
    char Name[20];

    cout<<"Please enter full name"<<"\n";
    scanf("%[^\n]", Name);

    cout<<"Your name is"<<Name<<"\n";

    return 0;
}