//WAP to input 6 subject marks and print the marks that is greater than average  mark.

#include<stdio.h>
void main()
{
    int sub[6],i,j,sum=0,avg;
    printf("Enter the marks obtained in all subjects\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&sub[i]);
        sum=sum+sub[i];
    }
    printf("Sum of marks= %d\n",sum);
    avg=sum/6;
    printf("Average of marks= %d\n",avg);
    printf("Marks greater than average are:\n");
    for(j=0;j<6;j++)
    {
        if(sub[j]>avg)
        {
            printf("%d  ",sub[j]);
        }
    }
}