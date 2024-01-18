/*Write a program which displays ASCII table. Table conatins symbols, Decimal, Hexadecimal, and
Octal represation of every member from 0 - 255*/

#include<stdio.h>
void DisplayASCII(char ch)
{
     int iCnt = 0;
     for(iCnt = 0, ch = '0'; iCnt <= 255; iCnt++, ch++)
     {    
          printf("%c \n", iCnt);
     }
}
int main()
{
     char cValue = '\0';

     DisplayASCII(cValue);
     return 0;
}