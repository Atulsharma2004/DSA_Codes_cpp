//wap to get armstrong number from 1 to 2000

(d,num_of_digit)

#include<stdio.h>
#include<math.h>
void main()
{
	int num,d,t,n;
	double sum=0;
//	printf("enter a number : ");
//	scanf("%d",&num);
for(n=1;n<=2000;n++)  //num=1427
{
	t=n;
	sum=0;
	num=n;
	for(; num>0 ;num=num/10)
	{
		d=num%10;
		sum=sum+pow(d,3);  
	}
	if(t==sum)  //t=1 , sum=1 : t=2 , sum=9 :t=3 , sum=
	printf("%d is a armstrong number\n",t);
}
}

