/*
Name: Arun Varghese
Date:07/11/2022
Description:Program to find 2nd largest element in an array
Sample Input:Enter the size of the Array : 5
             Enter the elements into the array: 5 1 4 2 8
Sample Output:Second largest element of the array is 5
*/

#include <stdio.h>

int sec_largest(int [], int);       //function declaration

int main()
{
    int size, ret,i;

    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size];

    //Read elements into the array
    printf("Enter the elements into the array: ");
    for(i=0;i<size;i++)
    {
	scanf("%d", &arr[i]);
    }

    //funtion call
    ret = sec_largest(arr, size);

    printf("Second largest element of the array is %d\n", ret);
}

int sec_largest(int arr[],int size)           //function defenition
{
    int lar,sec_lar,i;
    // to find largest element in array
    lar=arr[0];            
    for(i=0;i<size;i++)         
    {
	if(lar<arr[i])
	{
	    lar=arr[i];
	}
    }
//to find second largest element in array
    sec_lar=0;
    for(i=0;i<size;i++)
    {
	if(arr[i]<lar && arr[i]>sec_lar)
	{
	    sec_lar=arr[i];
	}
    }
    return sec_lar;
}
