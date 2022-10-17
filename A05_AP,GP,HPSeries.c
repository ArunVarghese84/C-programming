/*
Name: Arun Varghese
Date: 17/10/2022
Description: Program to generate AP, GP, HP series
Sample Input:Enter the First Number 'A': 2
             Enter the Common Difference / Ratio 'R': 3
             Enter the number of terms 'N': 5
Sample Output:AP = 2, 5, 8, 11, 14
              GP = 2, 6, 18, 54, 162
              HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/


#include<stdio.h>

int main()
{
    int a,r,n; //variables for first num(a),common ratio/diff(r),no.of terms(n)
    int i,ap,gp;                 //variables for loop,ap&gp
    float hp;                //variable for hp
    printf("Enter the First Number 'A':");        //first element is read
    scanf("%d",&a);
    printf("Enter the Common Difference / Ratio 'R':");        //common ratio is read
    scanf("%d", &r);
    printf("Enter the number of terms 'N':");              //no. of terms is read
    scanf("%d", &n);

    if(n>0)                //only for poitive limits,pgm is run
    {
    printf("AP = ");               // each ap value is printed by using a loop and progressed inside the loop
    ap=a;
    for(i=1;i<=n;i++)
    {
	printf("%d, ", ap);
	ap=ap+r;
    }
    printf("\n");

    printf("GP = ");                      // each gp value is printed by using a loop progressed inside loop
    gp=a;
    for(i=1;i<=n;i++)
    {
	printf("%d, ", gp);
	gp=gp*r;
    }
    printf("\n");

    printf("HP = ");      //hp value is printed using result of ap
    ap=a;
    hp=((float)1/a);
    for(i=1;i<=n;i++)
    {
	printf("%f, ", hp);
	ap=ap+r;
	hp=((float)1/ap);                
    }
    printf("\n");
    }
    else
    {
	printf("Invalid input\n");
    }
    return 0;
}
