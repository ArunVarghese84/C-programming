/*
Name: Arun Varghese
Date:07/11/2022 
Description:Program to implement Circular left shift 
Sample Input:Enter num: -2
             Enter n : 3
Sample Output:Result in Binary: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1
*/


#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_left(num, n);

    print_bits(ret);
}

int circular_left(int num, int n)
{
    int temp1,temp2;
    if(n<=32)
    {
	temp1=num>>(32-n) & ((1<<n)-1);
	temp2=num<<n;
	num=temp1|temp2;
    }
    return num;
}

int print_bits(int ret)
{
    int i,x;
    printf("Result in Binary:");
    for(i=32;i>=0;i--)
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

