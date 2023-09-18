//--------------------- INSERTION SORT ----------------------

#include<stdio.h>
void insertion_sort(int [20], int n);
void main()
{
    int i, n, a[20];
    printf("Enter the number of elements of array:\n");
    scanf("%d",&n);
    printf("Enter all elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a, n);
}

void insertion_sort(int a[20], int n)
{
    int i, j, temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    printf("Elements after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}