#include<stdio.h>
int greater(int a, int b)  //return type with argument
{
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
    int a, b;
    printf("Enter two numbers to compare\n");
    scanf("%d%d",&a,&b);
    int res = greater(a, b);
    printf("%d is greater",res);
} 