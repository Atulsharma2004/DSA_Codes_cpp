//WAP to sort the elements of an array using bubble sort.

#include<stdio.h>
void main()
{
    int i,j,p,a[20],n,temp=0;
    printf("Enter the number of elements of array:\n");
    scanf("%d",&n);
    printf("Enter all elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(p=0;p<n-1;p++)
    {
        for(i=0;i<n-1-p;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("Elements after sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}