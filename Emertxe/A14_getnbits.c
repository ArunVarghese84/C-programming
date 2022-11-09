/*
Name: Arun Varghese
Date: 2/11/2022
Description:Program to get 'n' bits of a given number 
Sample Input:Enter the number: 10

             Enter number of bits: 3
Sample Output:Result = 2
*/

#include<stdio.h>
int getnbits(int,int);  //function declaration
int main()
{
    int num,bit,res=0;    //variables in main function
    printf("Enter the number:");
    scanf("%d", &num);     //number is read
    printf("Enter number of bits:");
    scanf("%d", &bit);     //no. of bits is read

    res=getnbits(num,bit);          //function call and the value returned is collected in res
    printf("Result = %d\n", res);      // result is printed
}

int getnbits(int a, int b)    //function definition
{
    int mask,result;     //variables for the function
    mask=((1<<b)-1);     //mask created
    result= a & mask;     //result is found
    return result;       //result is retuned to function call
}
