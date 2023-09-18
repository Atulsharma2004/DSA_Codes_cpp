//C Program to Compute the Sum of Digits in a given Integer
// let num=345 the we have to print sum=3+4+5=12

#include<stdio.h>
void main()
{
    int num, i, sum=0, rem;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("\nSum of digits=%d",sum);
}