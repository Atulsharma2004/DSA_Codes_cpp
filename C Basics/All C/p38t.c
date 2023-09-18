//WAP to print the pattern:
//    5 5 5 5 5
//    4 4 4 4
//    3 3 3
//    2 2
//    1

#include<stdio.h> 
void main()
{
    int  i, j, k=5;
    /*while(k>=1)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d ",k);
        }
        printf("\n");
        k--;
    }*/
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
        }
        k--;
        printf("\n");
    }
}
