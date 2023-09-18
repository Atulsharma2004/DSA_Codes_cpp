#include<stdio.h>
int add(int n1,int n2) //return type with argument
{
	int c=n1+n2;
	return c;
}
void main()
{
	int a,b;
	printf("enter 2 numbers :");
	scanf("%d%d",&a,&b);
	int r=add(a,b);
	printf("result = %d",r);
}

