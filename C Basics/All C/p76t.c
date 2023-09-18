//WAP to create a udf to return sum of digits of a number using    int digitSum(int num)

#include<stdio.h>
int digitSum(int);
void main()
{
    int n,res;
    printf("Enter the number to find sum\n");
    scanf("%d",&n);
    res=digitSum(n);
    printf("Sum of digits= %d",res);
}

int digitSum(int num)
{
    int rem, sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
}