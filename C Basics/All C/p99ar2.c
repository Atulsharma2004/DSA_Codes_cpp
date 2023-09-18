//wap to input a 3*3 array and print transpose of matrix.

#include<stdio.h>
void main()
{
    int i, j, a[10][10],t[10][10],row,col;
    printf("Enter no. of rows and columns:\n");
    scanf("%d%d",&row,&col);
    printf("Enter all elemens of array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix is:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",t[i][j]);
            if(j==row-1)
            {
                printf("\n");
            }
        }
    }
}