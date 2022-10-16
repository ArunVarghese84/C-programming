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
    int num1,num2,res,limit;            //initializing values num1 and num2 for first 2 numbers, res for the rest of  numbers and limit for the limit to which.
    num1=0;                      //num1 is assigned first value
    num2=1;                       //2nd value assigned to num2
    printf("Enter a number:");
    scanf("%d", &limit);                 //limit is taken
    res=0;                        //res is assigned with 0
    if(limit>=0)               //checking whether limit is positive
    {
        if(limit==0)
        {
            printf("%d", num1);
        }
        else
        {
         printf("%d %d", num1, num2);             //first and 2nd value is print
	     while(res<limit)                           //loop upto the limit value
	     {
	      res=num1+num2;                           //next number being the sum of previous 2 numbers
	      num1=num2;                              //now for next execution 2nd number should be assigned to 1st number &
	      num2=res;                               //2rd number assigned to 2nd
	   if(res>limit)                             //if the 3 number is above the limit it should print,it should skip print
	    {
		continue;
	    }
	    printf(" %d",res);                    //print the next numbers through loop
	}
    }
	printf("\n");
    }
    else                                  //if limit is not a positive number
    {
	printf("\nInvalid input\n"); 
    }
    return 0;
}
