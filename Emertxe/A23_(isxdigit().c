/*
Name: Arun Varghese
Date: 31/10/2022
Description: Program to implement your own isxdigit() function
Sample Input:Enter the character: a
Sample Output:Entered character is an hexadecimal digit
*/

#include <stdio.h>

int is_xdigit(int);

int main()
{
    char ch;
    short ret=0;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ret = is_xdigit(ch);
    if(ret==1)
    {
	printf("Entered character is an hexadecimal digit\n");
    }
    else
    {
	printf("Entered character is not an hexadecimal digit\n");
    }

    return 0;
}

int is_xdigit(int ch)
{
    int ret=0;

    if( (ch>='0' && ch<='9') || (ch>='a' && ch<='f') || (ch>='A' && ch<='F'))
    {
	return 1;
    }
}
