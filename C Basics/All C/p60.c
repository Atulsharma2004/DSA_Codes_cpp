// WAP in C to print factorial of a given number

#include<stdio.h>
void fact()   //no return type nd no arguments
{
    int num,i,f=1;
    printf("Enter the vlaue of n\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f = f*i;
    }
    printf("%d is the factorial of %d",f,num);
}

void main()
{
    void fact();
    fact();
}
