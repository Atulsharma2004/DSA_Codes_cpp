//WAP to calculate nCr value
 
#include<stdio.h>
int Fact(int num)
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
    int n,r;
    float nCr;
    printf("Enter the values of n and r\n");
    scanf("%d%d",&n,&r);
    nCr=Fact(n)/Fact(r)*Fact(n-r);
    printf("Value of %dC%d=%f\n",n,r,nCr);
}