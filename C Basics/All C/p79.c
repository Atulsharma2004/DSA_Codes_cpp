#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==1)
        {
            continue;
            printf("%d ",i);
        }
    }
}