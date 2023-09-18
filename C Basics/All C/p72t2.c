//Create two udf :
//1 for counting the digits of a number
//2 for finding armstrong number 
//print armstrong numbers from 1 to 10000

#include<stdio.h>
#include<math.h>
int digit(int);
int armstrong(int);
void main()
{
    int i,res,num;
    printf("Enter the number till which we want\n");
    scanf("%d",num);
    printf("Series of armstrong number is: ");
    for(i=1;i<=num;i++)
    {
        res=armstrong(i);
        if(i==res)
        {
            printf("%d ",i);
        }
    }
}

int digit(int n)
{
    int i,count=0;
    for(;n>0;n=n/10)
    {
        count++;
    }
    return count;
}

int armstrong(int n)
{
    int d, rem, sum=0;
    d=digit(n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,d);
        n=n/10;
    }
    return sum;
}