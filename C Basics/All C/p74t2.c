//Create a udf to check a number is prime or not using int prime(int num)
//use this udf to find all the prime number within 1 to n

#include<stdio.h>
int prime(int);
void main()
{
    int n,i,res;
    printf("Enter the number till which we want\n");
    scanf("%d",&n);
    printf("Series of prime numbers: ");
    for(i=2;i<=n;i++)
    {
        res=prime(i);
        if(i==res)
        {
            printf("%d ",i);
        }
    }
}

int prime(int num)
{
    int i,count=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    return num;
}