// -------------- MODIFIED BUBBLE SORT --------------------
// Time complexity reduced from O(n^2) to O(n)

#include<stdio.h>
void bubble_sort(int [20], int);
void main()
{
    int i,j,a[20],n,temp=0,res;
    printf("Enter the number of elements of array:\n");
    scanf("%d",&n);
    printf("Enter all elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
}

void bubble_sort(int A[20], int n)
{
    int pass, i, flag, temp=0;
    for(pass=1;pass<=n-1;pass++)
    {
        flag=0;
        for(i=0;i<=n-1-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                flag=1;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
        if(flag==0)
        {
            printf("pass=%d",pass);
            return;
        }
    }
    printf("Elements after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}