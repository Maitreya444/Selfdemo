//Program to print 5 to 1 numbers on the screen

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;
    
    for(iCnt=5; iCnt>=1; iCnt--)
    {
        cout<<iCnt<<"\n";
    }
}

int main()
{
    Display();

    return 0;
}