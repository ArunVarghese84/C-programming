/*
Name: Arun Varghese
Date: 12/10/22 
Description: Program to check if number is odd or even
Sample Input:2
Sample Output:2 is positive even
*/


#include<stdio.h>

int main()
{
    int num,rem;                          //2 integer variable nfor reading number and reminder is declared
    printf("Enter value of 'n' =");
    scanf("%d", &num);                      //number is read from the user
    rem=num%2;                               //reminder is calculated

    if(num >  0)           //if number is positive 
    {
	if (rem == 0)       //check whether even
	{ 
	    printf("%d is positive even number\n", num);
	}
	else           // else odd
	{
	    printf("%d is positive odd number\n", num);
	}
    }
    else if (num < 0)       //if number is negative
    {
	if (rem == 0)        //check whether even
	{ 
	    printf("%d is negative even number\n", num);
	}
	else         //else odd
	{
	    printf("%d is negative odd number\n", num);
	}
    }
    else           //if number neither positive nor negative
    {
	printf("%d is neither odd nor even\n", num);     
    }

    return 0;
}


