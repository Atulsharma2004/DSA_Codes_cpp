//------------------- LEAP YEAR ----------------------

#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the no to be stored\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%4==0 || a[i]%100==0 || a[i]% 400==0)
        {
            printf("%d is leap year\n",a[i]);
        }
        else
        {
            printf("%d is not a leap year\n",a[i]);
        }
    }
}