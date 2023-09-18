//. Write a program to find total even numbers present in each row of a 3*3 matrix.

#include<stdio.h>
void main()
{
    int i, j, a[3][3],ev1=0,ev2=0,ev3=0;
    printf("Enter all elemens of array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array with all even index rows elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 && a[i][j]%2==0)
            {
                ev1++;
            }
            if(i==1 && a[i][j]%2==0)
            {
               ev2++; 
            }
            if(i==2 && a[i][j]%2==0)
            {
               ev3++;
            }
        }
    }
    printf("Total no. of evens in 1st row: %d\n",ev1);
    printf("Total no. of evens in 2nd row: %d\n",ev2);
    printf("Total no. of evens in 3rd row: %d",ev3);
}