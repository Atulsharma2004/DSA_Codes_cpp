//Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers

#include<stdio.h>
void main()
{
    int n,i,pos=0,neg=0;
    printf("Enter all 5 numbers\n");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("Positive numbers=%d\n",pos);
    printf("Ngative numbers=%d",neg);
}