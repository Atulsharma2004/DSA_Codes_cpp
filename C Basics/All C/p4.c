#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>=0)
    {
        printf("%d",n);
        printf("Enter the number");
        scanf("%d",&n);
    }
    getch();
}