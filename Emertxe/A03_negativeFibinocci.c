/*
Name: Arun Varghese
Date:14/10/2022 
Description: Program to generate negative Fibonacci numbers
Sample Input: Enter a number: -8
Sample Output: 0 1 -1 2 -3 5 -8
 */

#include<stdio.h>
int main()
{
    int limit,num1=0,num2=1,res=0,rev; // variables are decalred.
    printf("Enter the limit:");
    scanf("%d",&limit); // the input value is read.
    if(limit>0)
    {
	printf("Invalid input\n");
    }
    else
    {
	rev=-limit;
	while (res >= limit && res<=rev) // each time the condition is checked until the limit, on limit if a positive value appears, its condition should be checked too
	{
	    printf("%d ", res);
	    num1 = num2;      // second term is assigned to the first term
	    num2 = res;       // next term is assigned to the second term
	    res = num1-num2;  // next term is the summ of first and second term

	}
	printf("\n");
    }

    return 0;
}
