//WAP to print the multiplication of two matrices by taking both matrix from user.

#include<stdio.h>
void main()
{
    int i, j, r, r1, c, c1, k, a[5][5], b[5][5], m[5][5];
    printf("Enter the no. of row and column needed for 1st matrix:\n");
    scanf("%d%d",&r, &c);
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no. of row and column needed for 2nd matrix:\n");
    scanf("%d%d",&r1, &c1);
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("The 1st matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
     printf("The 2nd matrix is: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=0;
            for(k=0;k<c;k++)
            {
                m[i][j]=m[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of two matrices is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
}