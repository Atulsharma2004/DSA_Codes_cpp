//Create an user defined function to find the factorial of a number. Function prototype should be as follows:-            
//Int GetFact (int num)

#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number to find its factorial\n");
    scanf("%d",&n);
    int GetFact(int n);     // declaration of function
    int res = GetFact(n);   //calling of function
    printf("Factorial of %d is %d",n,res);
}
int GetFact(int num)   //return type with argument
{
    int i, f=1;
    for(i=1;i<=num;i++)
    {
        f = f*i;
    }
    return f;
}
