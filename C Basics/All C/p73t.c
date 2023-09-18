//WAP to create a udf to find the reverse value of a number using int reverse(int num)
//Create a udf to print all the palindrome num within 1-1000 using void Palindrome

#include<stdio.h>
int reverse(int);
void main()
{
    int n,i,res;
    printf("Enter the number\n");
    scanf("%d",&n);
    /*res=reverse(n);
    printf("Reverse=%d\n",res);
    if(n==res)
    {
        printf("Polindrome");
    }
    else
    {
        printf("Not polindrome");
    }*/

    for(i=1;i<=n;i++)
    {
        res=reverse(i);
        if(i==res)
        {
            printf("%d ",i);
        }
    }
}

int reverse(int num)
{
    int rem, rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}