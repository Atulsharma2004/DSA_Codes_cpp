//WAP to input n elements of array and check a given number is how many times present in array

#include<stdio.h>
void main()
{
    int i,j, arr[50],n,item,count;     //Wastage of memory
    printf("Enter the numbers to be stored\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&item);
    for(j=0;j<n;j++)
    {
        if(item==arr[j])
        {
            count++;
        }
    }
    printf("%d comes %d times in array",item,count);
}