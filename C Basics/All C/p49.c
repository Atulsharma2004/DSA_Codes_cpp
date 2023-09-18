//wap to print all prime numbers within 2 to 100
#include<stdio.h>
void main()
{
int num,i,count=0;
//printf("enter a number :");
//scanf("%d",&num); //8
for(num=2;num<=100;num++)  //num=3
{ count=0;
	for(i=1;i<=num;i++)
	{
	 if(num%i==0) 
	 {
	 	count=count+1; 
	 }
	} //count =2
if(count==2)
{
printf("%d is a prime number\n", num);	
}
}
}
//wap to print all polindrome numbers within 1 to 1000
//wap to print all armstrong numbers within a given range
//wap to print all prime numbers within 2 to n







