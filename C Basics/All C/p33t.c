//Write a program in C to display the multiplication table vertically from 1 to n.
//1*1=1    2*1=2    .    .    .    n*1=n
//1*2=2    2*2=4    .    .    .    n*2=2n
//1*3=3    2*3=6    .    .    .    n*3=3n
//.        .        .    .    .    .  
//.        .        .    .    .    .
//1*10=10  2*10=20  .    .    .    n*10=10n

#include<stdio.h>
void main()
{
    /*int n, i, j, k;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            k=i*j;
            printf("%d*%d=%d\t",j,i,k);
        }
        printf("\n");
    }*/

    int i=1,j=1,mul;
    while (i<=10)
    {
        while(j<=20)
        {
            mul=i*j;
            printf("%d*%d=%d  ",j,i,mul);
            j++;
        }
        printf("\n");
        i++;
    }
}