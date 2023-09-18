//9.	wap to input a 3*3 matrix and check given matrix is a identity matrix or not.
//        1  0  0
//        0  1  0
//        0  0  1

#include<stdio.h>
void main()
{
    int i,j,row=0,col=0,a[5][5],count=0;
    printf("Enter the no. of row and column:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of matrix:\n");
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
            if(i==j && a[i][j]!=1)
            {
                count++;
                break;
            }
            else if (i!=j && a[i][j]!=0)
            {
                count++;
                break;
            }
            
        }
    }
    if(count==0)
    {
        printf("It is an identity matrix");
    }
    else
    {
        printf("It is not an identity matrix");
    }
}