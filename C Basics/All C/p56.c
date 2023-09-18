#include<stdio.h>
void greater()   //no return type and no arguments
{
    int a, b;
    printf("Enter two numbers to compare");
    scanf("%d%d",&a,&b);
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
    void greater();
    greater();
}