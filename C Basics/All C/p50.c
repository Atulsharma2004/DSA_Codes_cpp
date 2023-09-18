#include<stdio.h>
void main()
{
int i,j,s;
for(i=1;i<=5;i++)
{
	for(s=1;s<=5-i;s++) //sp=4  , sp=3  , sp=2  , sp=1  , sp=0
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)  //j=1   , j=2   , j=3   , j=4  , j=5
	{
		printf("%d ",i);
	}
	printf("\n");
}
}
/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5  */
