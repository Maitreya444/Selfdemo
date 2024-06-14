/*Accept string from user and reverse the contents of that string by toggling the case

Input : "aCBdef"
Output : "FEDbcA"

*/

#include<stdio.h>

void StrTogX(char * str1)
{
    //Temporary Pointer
    char *temp = str1;

    //Move till last of the string
    while(*temp !='\0')
    {
        temp++;
    }
    //Come just before the last string
    temp--;

    //Keep comparing from the last character of temp till first character of str1
    while((temp >= str1))
    {
        if((*temp >= 'A' && *temp <='Z'))
        {
            *temp = *temp + 32;
            printf("%c",*temp);
        }
        else if((*temp >= 'a' && *temp <='z'))
        {
            *temp = *temp - 32;
            printf("%c", *temp);
        }
        //Decrement the counter
        temp--;
    }
}

int main()
{
    char arr1[30];

    printf("Enter 1st String \n");
    scanf("%[^\n]%*c", arr1);

    StrTogX(arr1);

    return 0;
}