#include<stdio.h>
void add(int a,int b) //formal arguments //no return type with argument
{
int c=a+b;
printf("result =%d",c);	
}
void main()
{
	int n1,n2;
	printf("enter 2 numbers : ");
	scanf("%d%d",&n1,&n2);
	add(n1,n2); //actual arguments
}
