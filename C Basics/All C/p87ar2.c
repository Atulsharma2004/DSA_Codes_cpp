//WAP to find sum of all the elements of a 2-D array of size 2x4.

#include<stdio.h>
void main()
{
    int i,j, ar[2][4],sum=0;     //Wastage of memory
    printf("Enter all numbers of 2-D array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&ar[i][j]);
            sum=sum+ar[i][j];
        }  
    }
    printf("Sum=%d",sum);
}