//WAP to find the sum of given n numbers.

#include<stdio.h>
void main()
{
    int i, arr[50],n,sum=0;     //Wastage of memory
    printf("Enter the numbers to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\nSum of all numbers is =%d",sum);
}