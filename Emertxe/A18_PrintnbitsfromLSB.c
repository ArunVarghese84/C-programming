/*
Name: Arun Varghese
Date: 07/11/2022
Description:Program to print 'n' bits from LSB of a number
Sample Input:Enter the number: 10

             Enter number of bits: 12
Sample Output:Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/

#include <stdio.h>

int print_bits(int, int);          //function declared

int main()
{
   int num, n;               //variable declared
    
    printf("Enter num, n :\n");   
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d:", num);         
    print_bits(num, n);         //function call
 }

int print_bits(int num,int n)
{
    int i,x;
    if(n<=32)         //checking whether no. of bits is less than or equal to 32
    {
	for(i=n-1;i>=0;i--)       //printing binary of number
	{
	    x= num & (1<<i);              //each bit is checked whether 0 or 1 and printed
	    if(x==0)
	    {
		printf("0 ");	
	    }
	    else
	    {
		printf("1 ");
	    }
	}
    }
}
