//WAP to store 10 int values in a array and print values
//from last index to 0th index

#include<stdio.h>
void main()
{
    int ar[10],i;
    printf("Enter all elements of array\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Elements of array in decreasing order of index are:\n");
    for(i=9;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
}



/*//WAP to reverse a given 1-Darray of n size.

#include<stdio.h>
void main()
{
    int i,j,a[50],n;
    printf("Enter number till which to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse of given array is:\n");
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
}*/