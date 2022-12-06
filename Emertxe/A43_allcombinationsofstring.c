/*
Name: Arun Varghese
Date: 30/11/2022
Description: Program to print possible combinations of given string.
Sample Input:Enter a string: abc
Sample Output:All possible combinations of given string :abc
              acb
              bca
              bac
              cab
              cba
*/

#include<stdio.h>


void combination(char [],int ,int );   //function declarations
int my_strlen(char []);

int main()

{
    char str[100];
    int n;
    int res;
    printf("Enter a string: ");      //the string is read
    scanf("%100[^\n]",str);
    n = my_strlen(str);     //string length is found using function and is collected on a variable n
    combination(str,0,n-1);      //function for printing all possible combinations of the string is called
    return 0;
}

int my_strlen(char str[])  //function to find the string length
{
    int i,count=0;

    for(i=0; str[i] != '\0'; i++)
    {
	count++;
    }
    return count;
}


void combination(char str[], int index, int lim)  //function definition to print all possible combinations of the string
{
    int j,x,k,temp,temp1,temp2,fact=1,flag;

    for(index=(lim);index>0;index--)  //factorial of n(no. of elements in the array) is found
    {
	fact=fact*index;
    }

    for(index=0;index<lim;index++)      //checking whether string has repeating elements
    {
	for(j=index+1;j<=lim;j++)
	{
	    if(str[index] == str[j])
	    {
		flag=1;
	    }
	}
    }

    if(flag==1)     //if string has repeating elements
    {
	printf("Error: please enter distinct characters.\n");
    }


    else
    {

    printf("All possible combinations of given string :");

    if(lim==1)   //if only 2 string elements are passed
    {
	for(j=0;j<=lim;j++) //swapping those 2 elements and printing them
    {
	printf("%s\n",str);
	temp=str[0];
	str[0]=str[1];
	str[1]=temp;
    }

    }

    else
    {
    for(index=1; index<=(lim+1);index++)      // outer loop which runs for n no. of times (from 1st index to make first element consstant in first iteration and so on)

    {
	k=lim;       //a variable k is taken and assigned value of n, to perform swapping of elements

	for(j=0; j<fact;j++)   // inner loop for swapping elements
	{   
	    printf("%s\n",str);  //each combination is printed on each iteration of inner loop

	    if((k-1)==0)         //once k-1(until 2nd last element) the loop runs
	    {
		k=lim;                 //k has to be made n again and the swapping of elements should happen till the inner loop runs for n factorial times
	    }

	    temp2=str[k];      //from right end the elements are swapped
	    str[k]=str[k-1];
	    str[k-1]=temp2;
	    k--;	    
	}
	//once inner loop exited, the right most element is changed to the element at which now index value points(sort of keeping it constant) and the inner swapping(all other elements) contiues
	temp1=str[0];	
	str[0]=str[index];
	str[index]=temp1;
    }
}
}
}
