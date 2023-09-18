//wap to print all numbers from 1 to 20
/*for(i=1;i<=n;i++)
{
	printf("%d",i);
}

int i,n;
printf("enter last number of series : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("%d ",i);
}*/

//wap to print all numbers within a given range : 

#include<stdio.h>
void main()
{
    int i,n;
    printf("enter first number of series : ");
    scanf("%d",&i); 
    printf("enter last number of series :");
    scanf("%d",&n);  //i , n i=first value , n= last value 
    if(i<=n)
    {
        for(i ; i<=n ; i++)
        {
	        printf("%d ",i); //10
        } //i=11
    }
    else
    {
        for(i ; i>=n ; i--)
        {
	        printf("%d ",i); //11 ,10
        }
    }
}








