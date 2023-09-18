#include<stdio.h>
 //declaration/definition of function
int add() //return type and no argument
{
	int n1,n2;
	printf("enter 2 number :");
	scanf("%d%d",&n1,&n2);
	int c=n1+n2;
//	printf("result = %d",c);
	return c;	
}
void main()
{
//printf("result = %d",add());
int res=add();
printf("result =%d",res);
}



