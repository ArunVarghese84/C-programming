/*
Name: Arun Varghese
Date: 31/10/2022
Description: Program to implement your own isxdigit() function
Sample Input:Enter the character: a
Sample Output:Entered character is an hexadecimal digit
*/

#include <stdio.h>

int is_xdigit(char);  //function declaration

int main()
{
    char ch;
    short ret=0;

    printf("Enter a character: ");     //character is read
    scanf("%c", &ch);

    ret = is_xdigit(ch);        //function call
    if(ret==1)                 //o/p with respect to the value returned from function
    {
	printf("Entered character is an hexadecimal digit\n");
    }
    else
    {
	printf("Entered character is not an hexadecimal digit\n");
    }

    return 0;
}

int is_xdigit(char ch)       //function defenition
{
    int ret=0;

    if( (ch>='0' && ch<='9') || (ch>='a' && ch<='f') || (ch>='A' && ch<='F'))     //checking whether a hexadecimal value and return 1 if true
    {
	return 1;
    }
}
