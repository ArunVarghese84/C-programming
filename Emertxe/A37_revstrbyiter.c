/*
Name: Arun Varghese
Date:17/11/2022 
Description: Program reverse the given string using iterative method
Sample Input:Enter a string : Hello World
Sample Output:Reverse string is : dlroW olleH
*/


#include <stdio.h>

void reverse_iterative(char str[]);  //function declaration

int main()
{
    char str[30];    //string declaration

    printf("Enter any string : ");     //string is read
    scanf("%[^\n]", str);

    reverse_iterative(str);       //function call

    printf("Reversed string is %s\n", str);     //reversed string is printed
}

void reverse_iterative(char str[])
{
    int len=0,i;        //variables used in function
    char temp;

    while(str[len] != '\0' )   //to find length
    {
	len++;
    }

    for(i=0;i<(len/2);i++)       //to reverse string
    {
	temp=str[i];
	str[i]=str[len-i-1];
	str[len-i-1]=temp;
    }
}
