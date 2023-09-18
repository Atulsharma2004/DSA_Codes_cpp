// WAP in C to print factorial of a given number

#include<stdio.h>
int fact()   //return type and no arguments
{
    int num,i,f=1;
    printf("Enter the vlaue of n\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f = f*i;
    }
    return f;
}

void main()
{
    int res = fact();
    printf("%d is factorial of the given number",res);
}
