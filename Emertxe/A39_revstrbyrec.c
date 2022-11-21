/*
Name: Arun Varghese
Date: 17/11/2022 
Description:Program to reverse the given string using recursive method
Sample Input:Enter a string : Hello World
Sample Output:Reverse string is : dlroW olleH
*/


#include<stdio.h>

void reverse_recursive(char str[], int ind, int len);           //function declaration

int main()   
{
    char str[30];      
    int i=0,len=0,ind=0;

    printf("Enter any string : ");
    scanf("%[^\n]", str);

    while(str[i] != '\0')                         //length of string is calculated
    {
	i++;
    }

    len=i;      

    reverse_recursive(str,ind,len);                      //function is called, the string indentation and length is string is passed to function

    printf("Reversed string is %s\n", str);                //reversed string is printed

}

void reverse_recursive(char str[], int ind, int len)                 //function defenition
{
    char temp;    

    //the string elements are changed according to reverse the string
    
    if(ind<(len/2))              //the base condition, until which condition string elements has to be changed for reversing the string
    {
    temp=str[ind]; 
    str[ind]=str[len-ind-1];
    str[len-ind-1]=temp;
                
	ind++;                       //indentation incremented for every function call 
	reverse_recursive(str, ind, len);                    //function called reccursively
    }
}
