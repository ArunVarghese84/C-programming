/*
Name: Arun Varghese
Date: 18/11/2022 
Description: Program to replace each string of one or more blanks by a single blank
Sample Input: Enter the string with more spaces in between two words
              Pointers     are               sharp     knives.
Sample Output:Pointers are sharp knives.
*/


#include <stdio.h>

void replace_blank(char []);        //function declaration

int main()
{
    char str[100];
    
    //printf("Enter the string with more spaces in between two words\n");      //string is read
    scanf("%[^\n]", str);
  

    replace_blank(str);      //function call

    printf("%s\n", str);      //string without additional spaces is printed
}

void replace_blank(char str[])  
{
    char temp;
    int i=0,j=0;

    while(str[i] != '\0')          
    {
	if(str[i] == ' ' || str[i] == '\t' || str[i] == '\0')         //check whether string element is space
	{  
	    if((str[i] == ' ' || str[i] == '\t' || str[i] == '\0') && temp ==str[i])  //check whether previous character was also space
	    {
		//if both characters space, string is left shifted till null
		j=i;       
		while(str[j] != '\0')
		{
		    str[j] = str [j+1];
		    j++;
		}
		i--; //if string left shifted check again from previous index
	    }
	}
	temp=str[i];
	i++;
    }
}
