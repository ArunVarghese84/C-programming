/*
Name: Arun Varghese
Date:20/10/22 
Description: Program to check N th bit is set or not, If yes, clear the M th bit
Sample Input:Enter the number: 19
             Enter 'N': 1
	     Enter 'M': 4
Sample Output:Updated value of num is 3 
*/


#include<stdio.h>

int main()
{
    int num,n,m;

    printf("Enter the number:");
    scanf("%d",&num);

    printf("Enter 'N':");
    scanf("%d", &n);

    printf("Enter 'M':");
    scanf("%d",&m);

    if((num>>n) & 01)
    {
	num = num &~(1<<m);
	printf("Updated value of num is %d\n", num);
    }
    else
    {
	printf("Updated value of num is %d\n", num);
    }
    return 0;
}
