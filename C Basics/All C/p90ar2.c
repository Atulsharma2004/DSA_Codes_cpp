//WAP to find sum of both diagonal elements a 2-D array of size 4x4.

#include<stdio.h>
void main()
{
    int i,j, ar[4][4],sum=0,sum2=0;     
    printf("Enter all numbers of 2-D array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&ar[i][j]);
            if(i==j)
            {
                sum=sum+ar[i][j];
            }
            if(i+j==3)     //i+j=n-1
            {
                sum2=sum2+ar[i][j];
            }
        }  
    }
    printf("Sum of all diagonal elements=%d\n",sum);
    printf("Sum of 2nd diagonal elements=%d",sum2);
}