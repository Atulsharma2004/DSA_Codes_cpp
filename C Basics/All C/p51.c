//wap to calculate ncr
#include<stdio.h>
 void main()
 {
 	int n,r,i,factn=1,factr=1,factnr=1;
 	printf("enter value of n to calculate ncr :");
 	scanf("%d",&n);
 	printf("enter value of r to calculate ncr : ");
 	scanf("%d",&r);=
 	for(i=1;i<=n;i++)
 	{
 		factn=factn*i;
	 }
	for(i=1;i<=r;i++)
	{
		factr=factr*i;
	}
	for(i=1;i<=n-r;i++)
	{
		factnr=factnr*i;
	}
	printf("factorial of n=%d r=%d and n-r =%d",factn,factr,factnr);
	
 }
 
 

