//WAP to input 6 subject marks and find sum and average of marks

#include<stdio.h>
void main()
{
    int sub[6],i,sum=0,avg;
    printf("Enter the marks obtained in all subjects\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&sub[i]);
        sum=sum+sub[i];
    }
    printf("Sum of marks= %d\n",sum);
    avg=sum/6;
    printf("Average of marks= %d",avg);
}