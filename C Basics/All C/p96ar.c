//wap to input 10 elements of array and arrange elements of array in ascending order.

#include<stdio.h>
void main()
{
    int i,j,temp,a[50],n;     //Wastage of memory
    printf("Enter the numbers to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array in ascending order are as:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)-
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    } 
}