#include<stdio.h>
void greater(int a, int b) //no return type with arguments
{
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else
    {
        printf("%d is greater",b);
    }
}
void main()
{
    int n1, n2;
    printf("Enter 2 numbers to compare");
    scanf("%d%d",&n1, &n2);
    greater(n1,n2);  //function calling
}