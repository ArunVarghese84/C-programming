/*
Name: Arun Varghese
Date:07/11/2022 
Description:Program to implement Circular left shift 
Sample Input:Enter num: -2
             Enter n : 3
Sample Output:Result in Binary: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1
*/


#include <stdio.h>

int circular_left(int, int);      //functions declaration
int print_bits(int);

int main()
{
    int num, n, ret;       //variable declaration

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_left(num, n);       //function for circular left shifting is called and value is collected in ret

    print_bits(ret);            //function for printing result in binary is called
}

int circular_left(int num, int n)          //function defenition for function for circular left shifting
{
    int temp1,temp2; 
    if(n<=32)
    {
	temp1=num>>(32-n) & ((1<<n)-1);        //n bits in MSB is retrived
	temp2=num<<n;                         //number is left shifted n times
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
