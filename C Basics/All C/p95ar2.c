//WAP to add two 2-D arrays of size 3x2.

#include<stdio.h>
void main()
{
    int i,j,a[3][2],b[3][2],sum[3][2];
    printf("Enter the elements of 1st array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of 2nd array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of two arrays is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

//WAP to subtract two 2-D arrays matrix

/*#include<stdio.h>
void main()
{
    int i,j,a[10][10],b[10][10],sub[10][10],row,col;
    printf("Enter the number of row and columns:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of 1st array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of 2nd array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of two arrays is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
}*/