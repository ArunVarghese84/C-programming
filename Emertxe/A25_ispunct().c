/*
Name: Arun Varghese
Date:2/11/2022 
Description: Program to implement your own ispunct() function
Sample Input:Enter the character:$
Sample Output:Entered character is punctuation character
*/


#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_ispunct(ch);
    if(ret==1)
    {
	printf("Entered character is punctuation character\n");
    }
    else
    {
	printf("Entered character is not punctuation character\n");
    }
return 0;

}


int my_ispunct(int ch)
{
if((ch>='0' && ch<='9') || (ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z'))
{
    return 0;
}
else
{
    return 1;
}
}
