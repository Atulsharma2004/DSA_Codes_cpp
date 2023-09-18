//Write a C program to convert a given integers ( in seconds ) to hours, minutes  and  seconds.

#include<stdio.h>
void main()
{
    int secs,hour,min,sec;
    printf("Enter the value of seconds to be converted\n");
    scanf("%d",&secs);

    hour=secs/360;
    min=(secs%360)/60;
    sec=(secs%360)%60;

    printf("In %d seconds there is %d hours %d minutes %d seconds",secs,hour,min,sec);
}