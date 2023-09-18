//wap to input 10 elements of array and arrange the even elements in a array and odd elements in another array.

#include<stdio.h>
void main()
{
    int i,j,a[10],e[10],o[10],ev=0,od=0;
    printf("Enter all numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Series of even numbers:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
           printf("%d ",a[i]);
        }
    }
    printf("\nSeries of odd numbers:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
           printf("%d ",a[i]);
        }
    }
}