/*
Name: Arun Varghese
Date: 05/12/2022
Description: Generate consecutive NRPS of length n using k distinct character 
Sample Input:Enter the number characters K : 3
             Enter the Length of the string N : 6
             Enter 3 distinct characters : a b c
Sample Output:Possible NRPS is abcbca
*/

#include <stdio.h>

void nrps(char [], int, int);       //function declaration

int main()
{
    int k,n;      
    printf("Enter the number of character K :");
    scanf("%d", &k);
    printf("Enter the length of the string N:");
    scanf("%d", &n);
    char str[k];
    printf("Enter 3 distinct characters:");
    scanf("%s[^\n]", str);

    nrps(str,k,n);      //function call

    return 0;
}

void nrps(char str[],int k,int n)   //function definition
{
    int i,j,flag=0;

     for(i=0;i<k;i++)      //checking whether string has repeating elements
    {
	for(j=i+1;j<=k;j++)
	{
	    if(str[i] == str[j])
	    {
		flag=1;
	    }
	}
    }

     if(flag ==1)      
     {
	 printf("Error : Enter distinct characters");
     }

     else         //if the input string contains all distinct characters
     {
	 printf("Possible NRPS is ");

	 for(i=0;i<k;i++)       //first k characters are printed
	 {
	    printf("%c",str[i]);
	 }

	 //non repeating pattern of k characters untill n is printed

	     for(j=k;j<n;j++)
	     {

		 if(((j+1)%k) == 0)   //each time k'th index point repeats in the pattern it is assigned to first element of previous pattern 
		 {
		     str[j]=str[j-(k+(k-1))];
		 }
		 else         //all other index are assigned with it's previous index+1'th position of previous pattern
		 { 
		     str[j]=str[(j-k)+1];  // like interms of a 3 character after printing original string  210 indexes repeating after each patterns with respect to previous pattern 
		 }

		 printf("%c",str[j]);       //printing the pattern character by character

	     }
     }
     printf("\n");
}
