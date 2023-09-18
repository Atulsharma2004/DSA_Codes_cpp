//Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
// Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row
//    1
//   2 2
//  3 3 3
// 4 4 4 4


#include<stdio.h>
void main()
{
    int i, j, k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j>i)
            {
                printf("  ");
            }
            else
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
}