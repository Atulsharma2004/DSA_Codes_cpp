//Write a program to find sum of square of element in a given matrix.

#include<stdio.h>
void main()
{
    int i,j,r,c, ar[5][5],s[5][5],sum=0;     //Wastage of memory
    printf("Enter the no. of row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter all numbers of 2-D array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
            s[i][j]=ar[i][j]*ar[i][j];   
        }  
    }
    printf("Matrix with square of elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",s[i][j]);  
        }
        printf("\n");  
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+s[i][j];   
        }  
    }
    printf("Sum of square of elements= %d",sum);
}