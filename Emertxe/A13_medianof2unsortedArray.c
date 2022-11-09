/*
Name: Arun Varghese
Date: 27/10/2022
Description: Program to find the median of two unsorted arrays
Sample Input:Enter the 'n' value for Array A: 5
             Enter the 'n' value for Array B: 5

             Enter the elements one by one for Array A: 3 2 8 5 4
             Enter the elements one by one for Array B: 12 3 7 8 5
Sample Output:Median of array1 : 4
              Median of array2 : 7
              Median of both arrays : 5.5    
*/

#include<stdio.h>
int main()
{
    int i,j,n,m,temp=0;  //integer variables declared
    float m1,m2,m3,m4,med1,med2,med3;  //float variables for median
    printf("Enter the 'n' value for Array A:\n");   //no. of elements in 1st array
    scanf("%d", &n);
    int array1[n];    //array1 declared
    printf("Enter the 'n' value for Array B:\n"); //no. of elements in 2nd array
    scanf("%d", &m);
    int array2[m];           //array2 declared
    printf("Enter the elements one by one for Array A:\n");
    for(i=0;i<n;++i)           //elements of array1 is taken
    {
	scanf("%d", &array1[i]);
    }
    printf("Enter the elements one by one for Array B:\n");
    for(i=0;i<m;++i)                //elements of array2 is taken
    {
	scanf("%d", &array2[i]);
    }
    //sorting first array using bubble sort
    for(i=0;i<n-1;++i)
    {
	for(j=0;j<n-i-1;++j)
	{
	    temp=0;
	    if(array1[j]<array1[j+1])
	    {
		temp=array1[j];
		array1[j]=array1[j+1];
		array1[j+1]=temp;
	    }
	}
    }
    //sorting second array using bubble sort
    for(i=0;i<m-1;++i)
    {
	for(j=0;j<m-i-1;++j)
	{
	    temp=0;
	    if(array2[j]<array2[j+1])
	    {
		temp=array2[j];
		array2[j]=array2[j+1];
		array2[j+1]=temp;
	    }
	}
    }
    //median of 1st array
    if(n%2==0)
    {
	m1=array1[n/2];
	m2=array1[(n/2)-1];
	med1=(m1+m2)/2;
    }
    else
    {
	med1=array1[n/2];
    }
    printf(" Median of array1 :%g\n", med1);
    //median of 2nd array
    if(m%2==0)
    {
	m3=array2[m/2];
	m4=array2[(m/2)-1];
	med2=(m3+m4)/2;
    }
    else
    {
	med2=array2[m/2];
    }
    printf("Median of array2 : %g\n", med2);

    med3=(med1+med2)/2;
    printf("Median of both arrays : %g\n",med3);
    return 0;
}
