//wap to create a udf to add 2 numbers
#include<stdio.h>
void main()
{
	void add();
	add(); //calling
}
void add() //no return type and no argument
{
	int a,b;
	printf("enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	int c=a+b;
	printf("Result = %d",c);
}
