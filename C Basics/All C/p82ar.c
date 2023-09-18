//WAP to input 5 subject marks and find total and average

#include<stdio.h>
void main()
{
    int sub[5],i,sum=0,avg;
    printf("Enter the marks obtained in all subjects\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&sub[i]);
        sum=sum+sub[i];
    }
    printf("Sum of marks= %d\n",sum);
    avg=sum/5;
    printf("Average of marks= %d",avg);
}