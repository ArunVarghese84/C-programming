/*
Name: Arun Varghese
Date:04/11/2022 
Description: Program to replace 'n' bits of a given number
Sample Input:Enter the number: 10

             Enter number of bits: 3

             Enter the value: 12
Sample Output:Result = 12
*/

#include <stdio.h>

int replace_nbits(int, int, int);

int main()
{
    int num, n, val, res = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);

    res = replace_nbits(num, n, val);

    printf("Result = %d\n", res);
}

int replace_nbits(int num, int n, int val)
{
    int nbit,res,i;
    nbit=(((1<<n)-1) & val);   //get n bits from value
    for(i=0;i<n;i++)
    {
	num= (num & ~(1 << i));   //clear n lsb bits of num
    }
    res = (num | nbit);  //replace by num or val for getting the result
    return res;
}
