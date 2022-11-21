/*
Name: Arun Varghese
Date: 16/11/2022
Description: Program to count no. of characters, words and lines, entered through stdin  
Sample Input:user@emertxe] ./my_wc
             Hello world
             Dennis Ritchie
             Linux
Sample Output:Character count : 33
              Line count : 3
              Word count : 5
*/

#include<stdio.h>

int main()
{
    int ch_count=0, wd_count, lcount=0;            //variables declared for character count,word count and line count 
    char ch,temp=1;                           //variables declared for reading character and storing temporary characters

    while(( ch = getchar() ) != EOF)             //getting character inputs till EOF(ctrl+d)
    {
	ch_count++;                            //character count is incremented for each character entered


//for each space character or newline character wordcount is incremented and wordcount is decremented for successive space &/or newline characters, by that we can maintain the word count even if multiple spaces/newlines are between two words



	if((ch == ' ' || ch == '\t' || ch == '\n') && temp == ch)     //if multiple spaces or newlines entered, word count is decremted
	{
         wd_count--;    
	}

	if(ch == ' ' || ch == '\t' || ch == '\n' )          //if any space or newline character is entered, word count is incremented
	{
	    wd_count++;
	}

	temp=ch;       //each charater is saved for evaluvating with respect to its very next character


	if(ch == '\n')   //with  each new line, line count is incremented
	{
	    lcount++;
	}

    }


    printf("Character count : %d\n",ch_count);         //each value is printed
    printf("Line count : %d\n",lcount);
    printf("Word count : %d\n",wd_count);

    return 0;

}
