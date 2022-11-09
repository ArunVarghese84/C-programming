/*
Name: Arun Varghese
Date:2/11/2022 
Description:Program to implement your own islower() function
Sample Input:Enter the character: a
Sample Output:Entered character is lower case alphabet
*/

#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_islower(ch);
    if(ret == 1)
    {
	printf("Entered character is lower case alphabet\n");
    }
    else
    {
	printf("Entered character is not lower case alphabet\n");
    }
    return 0;

}

int my_islower(int ch)
{
    if(ch>='a' && ch <= 'z')
    {
	return 1;
    }
    else
    {
	return 0;
    }
}
