/*
Name: Arun Varghese
Date:14/11/2022 
Description: Program to generate fibbonacci numbers using recursion
Sample Input:Enter a number: 8
Sample Output:0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

void positive_fibonacci(int, int, int, int);        //function declaration

int main()                                          
{
    int limit;

    printf("Enter the limit : ");             
    scanf("%d", &limit);

    if(limit>=0)               //if limit is greater than 1 function is called
    positive_fibonacci(limit, 0, 1, 0);
    else
	printf("Invalid Input");
    printf("\n");

    return 0;
}

void positive_fibonacci(int limit,int a,int b, int sum)      //function definition
{
    if(sum<=limit) //function should be called until limit is reached
    {
	printf("%d, ", sum);
	a=b;
	b=sum;
	sum=a+b;
	positive_fibonacci(limit,a,b,sum);          //function called reccursively until limit
    }
}
