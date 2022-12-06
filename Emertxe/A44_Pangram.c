/*
Name: Arun Varghese
Date: 22/11/2022
Description:Program check given string is Pangram or not
Sample Input:Enter the string: The quick brown fox jumps over the lazy dog
Sample Output:The Entered String is a Pangram String
*/


#include<stdio.h>

int panagram(char[]);        //function declaration

int main()
{
    int count;
    char str[100];

    printf("Enter the string: ");      //string is read
    scanf("%[^\n]", str);
    
    count=panagram(str);    //function call and result collected in count
    if(count==26)       //if all array elements are 1,pangram 
    {
	printf("The Entered String is a Pangram String");
    }
    else
    {
	printf("The Entered String is not a Pangram String");
    }

    return 0;

}

int panagram(char str[])        //function definition
{
    int i,a[26]={0},ind=0,count=0;

    for(i=0;str[i] != '\0';i++)     //check whether alphabets are present in string,for each string present, consecutive array element is assigned to 1
    {
	if(str[i] >= 'A' && str[i] <= 'Z')
	{
	    ind=str[i] - 65;
	    a[ind]=1;
	}
	else if(str[i] >= 'a' && str[i] <= 'z')
	{
	    ind=str[i] - 97;
	    a[ind]=1;
	}
    }

    for(i=0 ;a[i] != 0 ; i++)      //each array element is checked whether 0 or 1
    {
	if(a[i] == 1)
	    count++;
    }
    return count;    
}
