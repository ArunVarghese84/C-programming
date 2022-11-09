/*
Name: Arun Varghese
Date:03/11/2022 
Description:Program to get 'n' bits from given position of a number 
Sample Input:Enter the number: 12

                              Enter number of bits: 3
 
                              Enter the pos: 4
Sample Output:Result = 3
*/

#include <stdio.h>

int get_nbits_from_pos(int, int, int);  //function declaration

int main()
{
    int num, n, pos, res = 0;   //variable declaration
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos);   //function call
    
    printf("Result = %d\n", res);
}

int get_nbits_from_pos(int num,int n,int pos)     //function defenition
{
    return(((num>>((pos+1)-n))) & ((1<<n)-1));     //creating leftshift and doing bitwise and with mask to get result
}
