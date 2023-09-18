//wap to input a 3*4 array and print all even index rows elements.

#include<stdio.h>
void main()
{
    int i, j, a[3][4];
    printf("Enter all elemens of array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array with all even index rows elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i%2==0)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}