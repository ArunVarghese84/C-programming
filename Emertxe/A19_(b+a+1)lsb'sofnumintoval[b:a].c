/*
Name: Arun Varghese
Date:04/11/2022 
Description: Program to put the (b-a+1) lsb’s of num into val[b:a]
Sample Input:Enter the value of 'num' : 11
             Enter the value of 'a' : 3
             Enter the value of 'b' : 5
             Enter the value of 'val': 174
Sample Output:Result : 158
*/

#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);

    if(a <= b && b <= 31)
    {
    res = replace_nbits_from_pos(num, a, b, val);
    
    printf("Result = %d\n", res);
    }
    else
    {
	printf("Enter valid 'a' and 'b' values\n");
    }
    return 0;
}

int replace_nbits_from_pos(int num, int a, int b, int val)
{
    int i,res,n,mask,clear;
    n=b-a+1;
    mask=(((1<<n)-1) & num);         //get n lsb  bits from num
    mask=mask<<n;    //shifting the value from nth position

    a=((1<<n)-1);
    b=~(a<<n);        //created mask for clearing n bits from position of value
    clear=val&b;         //claring n bits from position of val

    res= mask | clear ;   //result by or-ing mask to the value cleared on position
    return res;
}



