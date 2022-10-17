/*
Name: Arun Varghese
Date: 17/10/2022 
Description: Program to print number pyramid pattern
Sample Input: Enter the number: 4
Sample Output: 4
               3 4
               2 3 4
               1 2 3 4
               2 3 4
               3 4
               4
 */

#include<stdio.h>

int main()
{
    int n,i,j;       //variables declared for limit,row & column values
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>1;i--)           //row element is run through loop,decremented on each loop from limit value to 1
    {
	for(j=i;j<=n;j++)       //column element is run through loop, starting from now row value to limit 
	{
	    printf("%d ",j);      //column value is printed
	}
	printf("\n");
    }
   for(i=1;i<=n; i++)         //row element is run
    {
	for(j=i;j<=n;j++)      //column element is run through loop, starting from now row value to limit
	{
	    printf("%d ",j);   //column value is printed
	}
	printf("\n");
    }
    return 0;
}
