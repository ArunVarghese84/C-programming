/*
Name: Arun Varghese
Date: 17/11/2022 
Description: Program to implement getword function
Sample Input:Enter the string : Welcome to Emertxe
Sample Output:You entered Welcome and the length is 7
*/

#include <stdio.h>

int getword(char str[]);    //function declaration

int main()
{
    int len = 0;    //variable for length
    char str[100];    //string declared

    printf("Enter the string : ");    //string reading from user
    scanf(" %[^\n]", str);

    len = getword(str);        //function call

    printf("You entered %s and the length is %d\n", str, len);
}

int getword(char str[])
{
    int i=0,len;  //variables used in function
    while(str[i] != ' ' && str[i] != '\t' &&  str[i] != '\0') //condition to check all string elements until the end of first word
    {
	i++;                 //length of string is read until end of first word
    }

    str[i]='\0';         //when first word in string ends,the space after it is changed to null thus making it a string


    len=i;     //length to return

    return len;
}
