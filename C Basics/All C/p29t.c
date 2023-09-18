//C Program to Reverse a Number & Check if it is a Palindrome 
// Palindrome example: 12421 - same from both side

#include<stdio.h>
void main()
{
    int num, rem,rev=0,temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse of given number=%d\n",rev);
    if(rev==temp)
    {
        printf("%d is a palindrome",temp);
    }
    else
    {
        printf("%d is not a palindrome",temp);
    }
}