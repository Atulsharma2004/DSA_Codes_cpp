// WAP to find determinent of matrix of order nxn.

#include<stdio.h>
void main()
{
    int i,j,k,a[5][5],n,res;
    printf("Enter the order of matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    res= det(a[i][j], n);
    printf("%d",res);
}
int det(int a[5][5], int n)
{
    int i,j,k,c1,c2,or=1,deter,minor[5][5];
    if(n==2)
    {
        deter=a[0][0]*a[1][1]-a[0][1]*a[1][0];
        return deter;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            c1=0, c2=0;
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(j!=0 && k!=i)
                    {
                        minor[c1][c2]=a[j][k];
                        c2++;
                        if(c2>n-2)
                        {
                            c1++;
                            c2=0;
                        }
                    }
                }
            }
            deter=deter+or*(a[0][i]*det(minor,n-1));
            or=-1*or;
        }
        return deter;
    }
}