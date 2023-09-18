//Create a udf to check a number is prime or not using int prime(int num)
//return 1 for prime and return 0 for not prime
//use this udf to find all the prime number within 1 to n

#include<stdio.h>
int prime(int);
void main()
{
    int n,res;
    printf("Enter the number to check\n");
    scanf("%d",&n);
    res = prime(n);
    if(res==1)
    {
        printf("%d is prime number\n",n);
        printf("Result=%d",res);
    }
    else
    {
        printf("%d is not prime number\n",n);
        printf("Result=%d",res);
    }
}

int prime(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}