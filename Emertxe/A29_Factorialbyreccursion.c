/*
Name: Arun Varghese
Date:14/11/2022 
Description:Program to find factorial of given number using recursion
Sample Input:Enter the value of N : 7
Sample Output:Factorial of the given number is 5040
*/


#include <stdio.h>

int main()
{
    static int num;                   //num is declared static so that it changes its value in each stack created for the execution
    static unsigned long long int fact = 1;    //fact also needs to be updated in each stack so that declared static


    if(fact==1)         //num should only read once when fact remains 1 
    {
	printf("Enter the value of N : ");
	scanf("%d", &num);
    }


    if(num<0)      //num should be greater than 0 to find factorial
    {
	printf("Invalid Input\n");
    }
    else if(num==0)
    {
	printf("Factorial of the given number is 1\n");
    }

    else
    {

    fact=fact*num;       //factorial is found by reccursion 
    num--;                //each time num needes to be decremented

    if(num>1)        //main called reccursively until num is greater than 1
    {
    main();
    }
    else     //once number becomes 1, the factorial result is printed
    {
	printf("Factorial of the given number is %lld\n", fact);
    }
    return 0;
    }
}
