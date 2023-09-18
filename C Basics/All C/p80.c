//WAP to input 2 numbers and print addition untill user press 1

#include<stdio.h>
void main()
{
    int n1, n2, ch;
    add:
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Addition =%d",n1+n2);
    printf("Enter the choice : 1 to continue and 2 to end\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        goto add;
    }
    else
    {
        goto end;
    }
    end:
    {
        printf("Thankyou");
    }
}