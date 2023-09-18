//WAP to find the 2nd largest element of  given n numbers.

#include<stdio.h>
void main()
{
    int i, a[50],n,max1,max2;     //Wastage of memory
    printf("Enter the numbers to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=max2=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    } 
    
    printf("Largest number is %d\n",max1);
    printf("2nd Largest number is %d",max2);
}
    