// WAP in C to print factorial of a given number

#include<stdio.h>
int fact(int num)    //return type with arguments
{
    int i,f=1;
    
    for(i=1;i<=num;i++)
    {
        f = f*i;
    }
    return f;
}

void main()
{
    int n;
    printf("Enter the vlaue of n\n");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d is the factorial of %d",res,n);
}
