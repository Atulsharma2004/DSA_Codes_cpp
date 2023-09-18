//C Program to Check whether a given Number is Perfect Number
// Perfect no. = sum of divisiors of that number except itself
//Ex:- 6 = 1+2+3     28 = 1+2+4+7+14

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number to check:\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
}