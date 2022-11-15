/*
Name: Arun Varghese
Date:14/11/2022
Description: Program to generate negative fibbonacci numbers using recursion
Sample Input:Enter a number: -8
Sample Output:0, 1, -1, 2, -3, 5, -8
*/

#include <stdio.h>

void negative_fibonacci(int, int, int, int);     //function declaration

int main()
{
    int limit,rev;

    printf("Enter the limit : ");            
    scanf("%d", &limit);
 
    if(limit<=0)        //if limit less than 0 negative fibanocci function is called
    negative_fibonacci(limit, 0, 1, 0);       //function call
    else
	printf("Invalid Input");
    printf("\n");

    return 0;
}

void negative_fibonacci(int limit,int a,int b,int diff)  //function definition
{
    int rev=-limit;
    if(diff>=limit && diff<=rev)     //condition for printing fibanocci
    {
	printf("%d, ", diff);
	a=b;
	b=diff;
	diff=a-b;
	negative_fibonacci(limit,a,b,diff);
    }
}
