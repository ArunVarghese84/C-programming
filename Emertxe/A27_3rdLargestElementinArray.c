/*
Name: Arun Varghese
Date:07/11/2022
Description:Program to find 3rd largest element in an array
Sample Input:Enter the size of the Array : 5
             Enter the elements into the array: 5 1 4 2 8
Sample Output:Third largest element of the array is 4
*/

#include <stdio.h>

int third_largest(int [], int);

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
    ret = third_largest(arr, size);

    printf("Third largest element of the array is %d\n", ret);
}

int third_largest(int arr[],int size)
{
    int lar,sec_lar,third_lar,i;
    //to find largest number
    lar=arr[0];
    for(i=0;i<size;i++)
    {
	if(lar<arr[i])
	{
	    lar=arr[i];
	}
    }
    //to find second largest number
    sec_lar=0;
    for(i=0;i<size;i++)
    {
	if(arr[i]<lar && arr[i]>sec_lar)
	{
	    sec_lar=arr[i];
	}
    }
    //to find third largest number
    third_lar=0;
    for(i=0;i<size;i++)
    {
	if(arr[i]<lar && arr[i]<sec_lar && arr[i]>third_lar)
	{
	    third_lar=arr[i];
	}
    }
    return third_lar;       //third largest number is returned
}
