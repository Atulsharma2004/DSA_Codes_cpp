//Create a program with following udf
//void sum(int a, int b)
//int sub(int a, int b)
//int mul(int a, int b)
//void div(int a, int b)

#include<stdio.h>
void sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
void div(int a, int b);
void main()
{
    int n1, n2, min, res, ch;
    printf("Enter the two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter choice 1,2,3,4 to add,sub,mul,div respectively\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            sum(n1, n2);
            break;
        case 2:
            min=sub(n1, n2);
            printf("sub=%d",min);
            break;
        case 3:
            res=mul(n1, n2);
            printf("mul=%d",res);
            break;
        case 4:
            div(n1, n2);
            break;
    default:
        break;
    }
}

void sum(int a, int b)
{
    printf("Sum=%d",a+b);
}

int sub(int a, int b)
{
    return a-b;
    /*if(a>b)
    {
        su=a-b;
        return su;
    }
    else
    {
        su=b-a;
        return su;
    }*/
}

int mul(int a, int b)
{
    return a*b;
}

void div(int a, int b)
{
    printf("Div= %d",a/b);
    /*if(a>b)
    {
        d=a/b;
        printf("Div= %d",d);
    }
    else
    {
        d=b/a;
        printf("Div= %d",d);
    }*/
}