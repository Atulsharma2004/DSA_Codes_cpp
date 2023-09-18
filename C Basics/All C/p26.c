//Write a program in C to display n terms of natural number, their sum and average also.

#include<stdio.h>
void main()
{
    int n,i,sum=0;
    float avg;
    printf("Enter n till which we wand numbers\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    avg=sum/n;
    printf("\nSum of all numbers = %d",sum);
    printf("\nAverage of all numbers = %f",avg);
}