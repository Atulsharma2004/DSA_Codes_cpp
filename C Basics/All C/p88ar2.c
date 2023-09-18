//WAP to find the largest element of a 2-D array of size 3x2.

#include<stdio.h>
void main()
{
    int i, a[3][2],j,max;     //Wastage of memory
    printf("Enter all numbers\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
       {
         scanf("%d",&a[i][j]);
       }
    }
    max=a[0][0];
    for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
       {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
       }
    }
    printf("Largest number is %d",max);
}