/*
Name: Arun Varghese
Date: 12/12/2022
Description: Program to perform  Variance calculation with dynamic arrays
Sample Input:Enter the no.of elements : 10
Sample Output:Enter the 10 elements:
              [0] -> 9
              [1] -> 12
              [2] -> 15
              [3] -> 18
              [4] -> 20
              [5] -> 22
              [6] -> 23
              [7] -> 24
              [8] -> 26
              [9] -> 31
              Variance is 40.000000
*/

#include<stdio.h>
#include<stdlib.h>     //header file for calloc() DMA

float variance(int *, int);  //function declaration

int main()
{
    int size;
    float var;
    printf("Enter the no. of elements : ");
    scanf("%d", &size);    //size of array is read

    int *ptr=(int *)calloc(size,sizeof(int));  //memory is allocated to a pointer ptr for the array by dynamic memory allocation
    
    var=variance(ptr,size);  //function call

    free(ptr);     //allocated memory is freed after operations
    
    printf("Variance is %f\n", var);  //result is printed
    
    return 0;

}

float variance(int *ptr,int size) //function definition
{
    int sum=0,i,sumd2=0,d,d2; //variables declaration
    float mean,var;
    printf("Enter the %d elements :\n",size);
    for(i=0;i<size;i++)  //elements of array are read from user
    {
	printf("[%d] -> ", i); 
	scanf("%d", (ptr+i));
	sum+=(ptr[i]);        //sum of all element of array is calculated
    }
    mean=(float)sum/size;  //mean of the array elements

    for(i=0;i<size;i++)
    {
	d=ptr[i]-mean; //divergence of each element from main
	d2=d*d;     //D^2 of each element
	sumd2+=d2; //sum of D^2
    }

    var=(float)sumd2/size; //variance of array is calculated
    return var; //variance is returned
}
