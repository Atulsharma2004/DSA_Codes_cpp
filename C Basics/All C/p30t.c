//C Program to Check whether a given Number is Armstrong
//armstrong no. = sum of here cubes(no of digits times) of its digits
//Ex:- 153 = (1*1*1)+(5*5*5)+(3*3*3)

#include<stdio.h>
void main()
{
    int num, rem,sum=0,temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    printf("Output number=%d\n",sum);
    if(sum==temp)
    {
        printf("%d is armstrong number\n",temp);
    }
    else
    {
        printf("%d is not armstrong number\n",temp);
    }
}