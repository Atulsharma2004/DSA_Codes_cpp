//WAP to store n numbers dynamically, then find the sum of all numbers.

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, sum=0, i, *p;
    printf("Enter no. of elements to store:\n");
    scanf("%d",&n);
    p = (int*)calloc(n, sizeof(int));
    printf("Enter all elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("Sum of all numbers = %d",sum);
}