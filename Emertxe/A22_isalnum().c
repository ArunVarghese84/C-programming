/*
Name: Arun Varghese
Date: 
Description:Program to implement your own isalnum() function 
Sample Input:Enter the character: a
Sample Output:The character 'a' is an alnum character.
*/

#include <stdio.h>

int my_isalnum(char);         //function declaration

int main()
{
    char ch;        //variables are declared
    int ret;

    printf("Enter the character:");  //character is read
    scanf("%c", &ch);

    ret = my_isalnum(ch);       //function call
    if(ret==1)         //value from function
    {
	printf("The character is an alnum character.\n");
    }
    else
    {
	printf("The character is not an alnum character.\n");
    }
    return 0;
}

int my_isalnum(char ch)        //function defenition
{
    int ret;
    if((ch>='0' && ch<='9')||(ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))	//check whether a is alnum
    {
	ret=1;
    }
    else
    {
	ret=0;
    }
    return ret;    //value is returned
}
