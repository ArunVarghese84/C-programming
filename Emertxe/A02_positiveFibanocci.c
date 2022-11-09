/*
Name: Arun Varghese
Date: 13/10/2022
Description: Program to generate positive Fibonacci numbers
Sample Input: Enter a number: 8
Sample Output: 0 1 1 2 3 5 8
*/


#include<stdio.h>

int main()
{
    int num1,num2,res,limit;
    num1=0;
    num2=1;
    printf("Enter a number:");
    scanf("%d", &limit);
    res=0;
    if(limit>=0)
    {
	if(limit==0)
	{
	    printf("%d",num1);
	}
	else
	{
	printf("%d %d", num1, num2);
	while(res<=limit)
	{
	    printf(" %d",res);
	    res=num1+num2;
	    num1=num2;
	    num2=res;
	}
	}
	printf("\n");
    }
    else
    {
	printf("Invalid input\n");
    }
}
