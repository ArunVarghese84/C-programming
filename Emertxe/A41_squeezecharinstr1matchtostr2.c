/*
Name: Arun Varghese
Date:18/11/2022
Description: Squeeze the character in s1 that matches any character in the string s2 
Sample Input:
    string 1: Dennis Ritchie
    string 2: Linux
Sample Output:After squeeze s1: Des Rtche
*/


#include <stdio.h>

void squeeze(char [], char []);   //function declaration

int main()
{
    char str1[30], str2[30];

    //both strings are read

    printf("Enter string1:");
    scanf("%[^\n]", str1);
    getchar();

    printf("Enter string2:");
    scanf("%[^\n]", str2);
  

    squeeze(str1, str2);   //function call

    printf("After squeeze s1 : %s\n", str1);  //strig 1 after squeeze

}

void squeeze(char str1[],char str2[])    //function definition
{
    int i=0,j=0,k=0,len1=0,len2=0;
 
    //length of str1 and str2
    while(str1[i] != '\0')
    {
	i++;
    }
    len1=i;
 

    while(str2[j] != '\0')
    {
	j++;
    }
    len2=j;
   

    for(i=0;i<len2;i++) 
    {
	for(j=0;j<len1;j++)
	{
	    if(str2[i] == str1[j])  //if character element of str2 matches str1
	    {
		for(k=j; k<len1; k++)  //str1 is left shifted from the matched index until null
		{
		    str1[k]=str1[k+1];
		}
		j--;       //after match, index moved to previous,to check again from there
	    }
	}
    } 
}
