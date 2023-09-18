//wap to input a number and print all digits of the number in seprate line
#include<stdio.h>
void main()
{
    int num,d1,d2,d3;
    printf("enter a number : ");
    scanf("%d",&num); //356
    d1=num%10; //6
    num=num/10; //num=35
    d2=num%10; //d2=5
    num=num/10; //num=3
    d3=num;
    printf("d1=%d\n,d2=%d\n,d3=%d\n",d3,d2,d1);
}
