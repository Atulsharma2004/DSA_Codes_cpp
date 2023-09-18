//WAP to create a udf to return number of digits of a number using    int digit(int num)

#include<stdio.h>
int digit(int);
void main()
{
    int n,res;
    printf("Enter the number to count its digit\n");
    scanf("%d",&n);
    res=digit(n);
    printf("Number of digits= %d",res);
}

int digit(int num)
{
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    return count;
}