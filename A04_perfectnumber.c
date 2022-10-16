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
    int i,num,sum;                    //variables are initialized, i for loop where number is divided by each value less than the number itsef, num for the number and sum for sum of its positive proper divisors 
    printf("Enter a number:");
    scanf("%d", &num);                //read the value of num
    sum=0;
    if(num>0)                         //if number is positive
    {
    for(i=1;i<num;i++)                //in a loop the given number is divided by all positive numbers less than the number itself
    {
	if(num%i==0)                        //finding whether the number, i value is a proper divisor of our number
	{
	    sum=sum+i;                     //sum of all proper divisors are taken
	}
    }
    if (num == sum)     
    {
	printf("Yes, entered number is perfect number\n");             //number is perfect if sum is equal to the number
    }
    else
    {
	printf("No, entered number is not a perfect number\n");
    }
    }
    else                               //if number is not positive
    {
	printf("Error : Invalid Input, Enter only positive number\n");
    }
    return 0;
}
