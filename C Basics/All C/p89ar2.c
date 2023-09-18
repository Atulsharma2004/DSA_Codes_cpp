//WAP to find sum of all even elements of a 2-D array of order 4x4.

#include<stdio.h>
void main()
{
    int i,j, ar[4][4],sum=0;     //Wastage of memory
    printf("Enter all numbers of 2-D array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&ar[i][j]);
            if(ar[i][j]%2==0)
            {
                sum=sum+ar[i][j];
            }
        }  
    }
    printf("Sum of all even numbers=%d",sum);
}