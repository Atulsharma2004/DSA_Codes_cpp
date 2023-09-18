//WAP to make a udf to check a given no. is a armstrong number or not.

#include<stdio.h>
int armstrong(int);
void main()
{
    int n, i, res;
    printf("Enter any number to check\n");
    scanf("%d",&n);
    res=armstrong(n);
    if(res==1)
    {
        printf("Number is an armstrong number\n");
        printf("Result=%d",res);
    }
    else
    {
        printf("Number is not an armstrong number\n");
        printf("Result=%d",res);
    }


    /*for(i=1;i<=n;i++)
    {
        res=armstrong(i);
        if(i==res)
        printf("%d ",res);
    }*/
}   
int armstrong(int num)
{
    int rem,temp,sum=0;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    //return sum;
    if(sum==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

