//C Program to Generate Fibonacci Series of  N Numbers using while loop .
//Series: next term is summation of previous two terms
//1st term=0 and 2nd term=1
//Ex:- 0 1 1 2 3 5 8 13 21 34 . . . .

#include<stdio.h>
void main()
{
    int a=0, i, b=1, num, next;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("%d %d",a,b);
    for(i=1;i<=num-2;i++)
    {
        next=a+b;
        printf(" %d",next);
        a=b;
        b=next;
    }
}