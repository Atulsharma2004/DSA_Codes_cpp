//WAP to create a udf to find the multiplication of a number using      int mul(int n1, int n2) and take user choice
//if user press 1 then find the area of a circle
//if 2 then find area of rectangle
//if 3 then area of triangle

#include<stdio.h>
int mul(int, int);
void main()
{
    int r,n1, n2, pi=3.14, ch,arR;
    float arC, arRE;
    printf("Enter the choice\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("Enter radius of circle\n");
        scanf("%d",&r);
            arC=pi*mul(r,r);
            printf("Area of circle=%f",arC);
            break;
        case 2:
            printf("Enter length and breath of rectangle\n");
            scanf("%d%d",&n1,&n2);
            arR=mul(n1,n2);
            printf("Area of rectangle=%d",arR);
            break;
        case 3:
            printf("Enter base and height of triangle\n");
            scanf("%d%d",&n1,&n2);
            arRE=0.5*mul(n1,n2);
            printf("Area of triangle=%f",arRE);
            break;
    default:
        break;
    }
}

int mul(int l, int b)
{
    return l*b;
}