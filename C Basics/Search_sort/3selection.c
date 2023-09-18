//------------------- SELECTION SORT ------------------

#include<stdio.h>
int min(int [20], int , int );
void main()
{
    int a[20],k,i,n,loc,temp=0;
    printf("Enter the no. of elements of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=0;k<n-1;k++)
    {
        loc=min(a,n,k);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    printf("Elements after sorted:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int min(int A[20], int n, int k)
{
    int j, minm, loc;
    minm=A[k];
    loc=k;
    for(j=k+1;j<=n-1;j++)
    {
        if(minm>A[j])
        {
            minm=A[j];
            loc=j;
        }
    }
    return loc;
}