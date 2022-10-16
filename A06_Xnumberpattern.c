/*
Name: Arun Varghese
Date: 14/10/2022
Description: Program to print the numbers in X format.
Sample Input: Enter the number: 5
Sample Output:1   5
               2 4
                3
               2 4
              1   5
*/


#include<stdio.h>

int main()
{
    int i,j,limit;    //variables declared
    printf("Enter the number: ");
    scanf("%d",&limit); //limit is read

    for(i=1;i<=limit;i++)
    {
	for(j=1;j<=limit;j++)
	{
	    if(i==j)      //if row and column values are equal
	    {
		printf("%d", i);   //row value is printed for right to left value
	    }
	    else if((i+j)==(limit+1))   //if sum of row and column value is equal to one more than limit value 
	    {
		printf("%d",j); //column value is printed for left to right value
	    }
	    else
	    {
		printf(" ");  //if neighter on both condition, space is printed
	    }
	    
	}
	printf("\n");
    }
    return 0;
}
