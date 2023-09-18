//Write a  c program to check whether the given number is even or odd by creating UDF.UDF prototype should be as follows:-
//void CheckNumber()

#include<stdio.h>
void CheckNumber()    //no return type and no arguments
{
    int num;
    printf("Enter the number to check\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is prime number",num);
    }
    else
    {
        printf("%d is not prime number",num);
    }
}
void main()
{
    CheckNumber();
}
