/*
Name: Arun Varghese
Date: 
Description:Program to print 'n' bits from LSB of a number
Sample Input:Enter the number: 10

             Enter number of bits: 12
Sample Output:Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/

#include <stdio.h>

int print_bits(int, int);           //function declaration

int main()
{
   int num, n,i,x;                     //variable declaration
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);             //number and no. of bits is read
    
    printf("Binary form of %d:", num);
    for(i=0;i<n;i++)
    {
    x=print_bits(num, n);       //function call
    printf("%d ",x);
    --n;
    }
}

int print_bits(int num,int n)             //function definition
{
    int x,i;
    if(n<=32 && n>=0)      //checking whether no. of bits is below 32 bits.
    {
    for(i=0;i>=0;)
	    x= num & (1<<n);      //a mask to check each bit whether 0 or 1
	    if(x==0)
	    {
		x=0;	
	    }
	    else
	    {
		x=1;
	    }
	    i=1;
   }
   
    return x;
}
