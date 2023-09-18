//wap to count how many numbers are even within 2 to n
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter last number of series :");
	scanf("%d",&i); //40
	for(n=1;n<=i;n++)
	{
		if(n%2==0)
		{
			count++;
		}
	}
	printf("total even values within 1 to %d is %d",i,count);
}
