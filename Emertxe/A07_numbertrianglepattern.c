/*
Name: Arun Varghese
Date:14/10/2022 
Description: Program to print triangle pattern 
Sample Input: Enter the number: 4
Sample Output: 1 2 3 4
               5   6
               7 8
               9
*/

#include<stdio.h>

int main()
{
    int i,j,limit,count=0;    //variables declared
    printf("Enter the number: ");
    scanf("%d",&limit); //limit is read

    for(i=1;i<=limit;i++)
    {
	for(j=1;j<=limit;j++)
	{
	    if(i==1)      //if row value is one
	    {
		count=count+1;  //numbers printed with one increment on each loop
		printf("%d ", count);   //first row values
	    }
	    else if(j==1) //if in first column
	    {
		count=count+1;
		printf("%d ", count);     //colum value is printed with increment for first coulmn
	    }
	    else if((i+j)==(limit+1))   //if sum of row and column value is equal to one more than limit value 
	    {
		count=count+1;
		printf("%d ", count); // value is printed for right top  to left bottom
	    }
	    else
	    {
		printf("  ");  //if neighter on both condition, space is printed
	    }
	    
	}
	printf("\n");
    }
    return 0;
}

