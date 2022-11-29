/*
Name: Arun Varghese
Date: 21/11/2022
Description:Program to implement atoi function 
Sample Input:Enter a numeric string: 12345
Sample Output:String to integer is 12345
 */


#include <stdio.h>

int my_atoi(const char []);       //function declaration   

int main()
{
    char str[20];

    printf("Enter a numeric string : ");
    scanf("%s", str);

    printf("String to integer is %d\n", my_atoi(str));         //function is called and recult is printed
}

int my_atoi(const char str[])     //function defenition
{
    int i,num,res=0,flag=0,a,b;       

    a=(str[0] >= '0' && str[0] <= '9');    //checking whether 1st 2 elements of strings are characters
    b=(str[1] >= '0' && str[1] <= '9');

    for(i=0; str[i]!= '\0';i++)          //each element of string is read
    {

	if( str[i] >= '0' && str[i] <= '9')    //if string elements is a digit 
	{
	    num = str[i] - 48;       //element from string is converted to a numeric digit

	    res= (res*10) + num;      //with each new element its multiplied by 10 and added the new element
	}
 
	else if( (a == 0) && (b == 0))      //if first two elemets are characters it should return 0 
	{
	    return 0;
	}

	else if(str[0] == '-')     //if first element is - the digit should made negative
	{
	    flag=1;
	}

	else if(str[0] == '+'){	    //if first element is + the loop should continue
	}

	else               //whenever character elements appears should return result there
	{
	    return res;
	}


    }


    if(flag ==1) //if first character is -ve
    {
	res=-1*res;
	return res;
    }

    return res;
}
