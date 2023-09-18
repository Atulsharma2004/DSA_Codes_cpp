//wap to print all even numbers within n to 20(where n is less than 20)
#include<stdio.h>
void main()
{
	int i;
	printf("enter strting of series :");
	scanf("%d",&i); //i=25
if(i<=20)
{
	for(  ;i<=20 ;i=i+1 )
	{
		if(i%2==0)
		printf("%d ",i);
	}
}
else
{
	printf("please enter a value that is less than 20");
}

 } 
