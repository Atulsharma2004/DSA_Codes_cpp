//WAP to input 10 elements of array and count total even and odd value present in array.

#include<stdio.h>
void main()
{
    int i,j,a[10],ev=0,od=0;
    printf("Enter all numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        if(a[j]%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }
    printf("Total number of even numbers=%d\n",ev);
    printf("Total number of odd numbers=%d",od);
}