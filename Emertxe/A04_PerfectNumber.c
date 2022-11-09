/*
Name: Arun Varghese
Date: 13/10/2022 
Description: Program to check if number is perfect or not
Sample Input:Enter a number: 6
Sample Output:Yes, entered number is perfect number
*/

#include<stdio.h>

int main()
{
    int i,num,sum;
    printf("Enter a number:");
    scanf("%d", &num);
    sum=0;
    if(num>0)
    {
    for(i=1;i<num;i++)
    {
	if(num%i==0)
	{
	    sum=sum+i;
	}
    }
    if (num == sum)
    {
	printf("Yes, entered number is perfect number\n");
    }
    else
    {
	printf("No, entered number is not a perfect number\n");
    }
    }
    else
    {
	printf("Error : Invalid Input, Enter only positive number\n");
    }
}

