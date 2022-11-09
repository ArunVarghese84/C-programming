/*
Name: Arun Varghese
Date: 07/11/2022 
Description: 
Sample Input:
Sample Output:
*/

#include <stdio.h>

int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_right(num, n);

    print_bits(ret);
}

int circular_right(int num, int n)
{
    int temp1,temp2; 
    if(n<=32)
    {
	temp1=num<<(32-n);        //n bits in MSB is retrived
	temp2=num>>n & ((1<<(32-n))-1);                         //number is left shifted n times
	num=temp1|temp2;                      //retrived MSB bit is added to LSB
    }
    return num;                        //result is returned
}

int print_bits(int ret)             //function to print the result in binary
{
    int i,x;
    printf("Result in Binary: ");
    for(i=31;i>=0;i--)
    {
	x=ret &(1<<i);
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

