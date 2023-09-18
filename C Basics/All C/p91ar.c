//WAP to input n elements of array and check a given number is  present in array or not.

#include<stdio.h>
void main()
{
    int i,j, arr[50],n,item,count=0;     //Wastage of memory
    printf("Enter the numbers to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be checked\n");
    scanf("%d",&item);
    for(j=0;j<n;j++)
    {
        if(item==arr[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("%d is present in array",item);
    }
    else
    {
         printf("%d is not present in array",item);
    }  
}  
