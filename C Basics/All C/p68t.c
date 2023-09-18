//Create an UDF to swap two numbers using call by value. Function prototype should be as follows :-
//void Swap( int num1 , int num2)
//Ex: Input:  Num1: 5                         Output:  Num1: 8
//            Num2: 8                                  Num2: 5

#include<stdio.h>
void Swap(int num1, int num2)
{
    int temp;
    printf("Numbers before swaping are %d and %d",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nNumbers after swaping are %d and %d",num1,num2);
}
void main()
{
    int a, b;
    printf("Enter two values to swap\n");
    scanf("%d%d",&a,&b);
    Swap(a, b);
}
