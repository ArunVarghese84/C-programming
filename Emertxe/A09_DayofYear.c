/*
Name: Arun Varghese
Date:18/10/2022 
Description: Program to find which day of the year
Sample Input:Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
Sample Output:The day is Tuesday
 */


#include<stdio.h>

int main()
{
    int n,p,rem,day,temp;   //variables are declared
    printf("Enter the value of 'n' :");
    scanf("%d", &n);        //no. of days read from user

    if( n>0 && n<=365 )    //no. of days should be from 1 to 365
    {
	printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n"); //options for user
	printf("Enter the option to set the first day :");  
	scanf("%d", &p);   //first day is read

    if(p>0 && p<=7)      //first day should be 1 to 7, days in a week
    {
	temp=(p+n);     //sum of firstday and no. of days are initialized to a temporary variable
	day=((temp-2)%7); //day is the reminder of that temp variable minus 2 

	switch(day)         //days are print w.r.to the  day
	{
	    case 0:
		printf("The day is Sunday\n");
		break;
	    case 1:
		printf("The day is Monday\n");
		break;
	    case 2:
		printf("The day is Tuesday\n");
		break;
	    case 3:
		printf("The day is Wednesday\n");
		break;
	    case 4:
		printf("The day is Thursday\n");
		break;
	    case 5:
		printf("The day is Friday\n");
		break;
	    case 6:
		printf("The day is Saturday\n");
		break;
	    default:
		printf("Error: Invalid input, first day should be > 0 and <= 7\n");
		break;
	}
    }
    else
    {
	printf("Error: Invalid input, first day should be > 0 <=7\n");
    }
    }
    else
    {
	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }
    return 0;
}
