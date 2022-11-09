/*
Name: Arun Varghese
Date: 2
Description:Program to get 'n' bits of a given number 
Sample Input:Enter the number: 10

             Enter number of bits: 3
Sample Output:Result = 2
*/

#include<stdio.h>
int getnbits(int,int);
int main()
{
    int num,bit,res=0;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Enter number of bits:");
    scanf("%d", &bit);

    res=getnbits(num,bit);
    printf("Result = %d\n", res);
}

int getnbits(int a, int b)
{
    int mask,result;
    mask=((1<<b)-1);
    result= a & mask;
    return result;
}
