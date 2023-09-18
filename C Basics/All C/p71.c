//WAP to print power by taking two values using user-defined function 

#include<stdio.h>
int pow2();     //Declaration
int power();    //Declaration 
void main()
{
    int p, b, ba;
    printf("Enter the values of base\n");
    scanf("%d",&ba);
    printf("Enter the values of base and power\n");
    scanf("%d%d",&b,&p);
    printf("power2=%d\n",pow2(ba));
    printf("Power = %d",power(b,p));
}

int pow2(int base)
{
    return base*base;
}

int power(int bas, int pow)
{
    int i, mul=1;
    for(i=1;i<=pow;i++)   // 1*5=5    5*5=25    25*5=125
    {
        mul=mul*bas;
    }
    return mul;
}