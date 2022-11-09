/*
Name: Arun Varghese
Date:2/11/2022 
Description:Program to print all primes using Sieve of Eratosthenes method
Sample Input:Enter the value of 'n' : 20
Sample Output:The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/


#include<stdio.h>

int main()
{
    int n,i,count=2,j,new;
    float sqrt,x;               //variables declared
    printf("Enter the value of 'n':");
    scanf("%d", &n);       //n value read

    if(n<=1)
    {
	printf("Please enter a positive number which is > 1\n");
    }
    
    else
    {
    int arr[n-2];
                      //array is read
    for(i=0;i<n-1;i++)
    {
	arr[i]=count;
        count++;
    }
                      //finding square root of n
    x=n;
    for(i=0;i<n;i++)
    {
	sqrt=((x+(n/x))/2);
	x=sqrt;
    }
new=sqrt;
                           //finding the numbers with more than 2 divisors and making them zero 
    for(i=0;i<(n-1);i++)
    {
	for(j=2;j<=new;j++)
	{
	    if( (arr[i]%j) ==0 && arr[i]!=j)
	    {
	    arr[i]=0;
	    }
	}
    }
    printf("The primes less than or equal to %d are :", n);  //printing the prime numbers
    for(i=0;i<=(n-2);i++)
    {
	if(arr[i]!=0)
	printf("%d ", arr[i]);
    }
    }
    return 0;
}


