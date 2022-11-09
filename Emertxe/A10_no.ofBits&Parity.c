/*
Name: Arun Varghese
Date: 20/10/22 
Description: Program to count number of set bits in a given number and print parity
Sample Input: Enter the number : 7
Sample Output: Number of set bits = 3
               Bit parity is Odd
*/

#include<stdio.h>

int main()
{
    int count,num;
    printf("Enter the number :");
    scanf("%d", &num);

    for(count=0;num !=0; num >>= 1)
    {
	if(num & 01)
	{
	    count++;
	}
    }
	printf("Number of set bits = %d\n", count);

	if(count & 01)
	{
	    printf("Bit parity is Odd\n");
	}
	else
	{
	    printf("Bit parity is Even\n");
	}
	return 0;
}

