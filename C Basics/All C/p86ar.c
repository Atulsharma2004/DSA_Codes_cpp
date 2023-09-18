//WAP to find the largest element of a given n numbers

#include<stdio.h>
void main()
{
    int i, a[50],n,max;     //Wastage of memory
    printf("Enter the numbers to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Largest number is %d",max);
}