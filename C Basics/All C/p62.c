// WAP in C to print factorial of a given number

#include<stdio.h>
void fact(int num)   // no return type with arguments
{
    int f=1;
    for(int i=1;i<=num;i++)
    {
        f = f*i;
    }
    printf("%d is the factorial of the given number",f);
}

void main()
{
    int n;
    printf("Enter the value of number\n");
    scanf("%d",&n);
    fact(n);
}
