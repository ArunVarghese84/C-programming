/*
Name: Arun Varghese
Date:13/12/2022
Description:Program to convert Little Endian data to Big Endian
Sample Input:Enter the size: 2
            Enter any number in Hexadecimal: ABCD
Sample Output:After conversion CDAB
*/

#include<stdio.h>

int main()
{
    int size;
    char *ptr,temp;    //character pointer ptr and a character variable temp
    printf("Enter the size: ");  
    scanf("%d", &size); //size is read

    printf("Enter any number in Hexadecimal: ");
    
    if(size==2)   //if size is 2, short
    {
	short num;
	scanf("%hX",&num);  //number is read
	ptr=(char *)&num;   //address of num is saved to ptr

	temp=*ptr;          //number is swaped as of in Big Endian
	*(ptr)=*(ptr+1);
	*(ptr+1)=temp;

	printf("After conversion %hX",num);  //num is printed
    }

    if(size==4)    //if size is 4, int
    {
	int num;     
	scanf("%X",&num);
	ptr=(char *)&num;

	for(int i=0;i<(size/2);i++) //number is swapped as of Big Endian
	{
	    temp=*(ptr+i);
	    *(ptr+i)=*(ptr+(size-i-1));
	    *(ptr+(size-i-1))=temp;
	}
	printf("After conversion %X",num);

    }	
}
