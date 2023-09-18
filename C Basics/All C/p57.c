#include<stdio.h>
int greater()   //retuen type and no arguments
{
    int a, b;
    printf("Enter two numbers to compare");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        return a;
    }
    else
    {
       return b;
    }
}
void main()
{
    int res=greater();
    printf("%d is greater",res);
}