//WAP to create a udf to find the square of a number using      int square(int num)
//Also create a udf to find the area of a circle and use the avove udf by using     void areaOfCircle()

#include<stdio.h>
int square(int);
void areaOfCircle();

void main()
{
    /*int num,res;
    printf("Enter a number for square\n");
    scanf("%d",&num);
    res=square(num);
    printf("Square=%d",res);*/

    areaOfCircle();
}

int square(int n)
{
    int s;
    s=n*n;
    return s;
}

void areaOfCircle()
{
    int r,mul;
    float pi=3.14,ar;
    printf("Enter the radious of the circle\n");
    scanf("%d",&r);
    mul=square(r);
    ar=pi*mul;
    printf("Area of circle is: %f",ar);
}