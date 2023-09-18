//Write a C program to convert  specified days into year, weeks and days
//Note: Ignore Leap year

#include<stdio.h>
void main()
{
    int ndays,days,year,week;
    printf("Enter the no. of days to be converted\n");
    scanf("%d",&ndays);

    year=ndays/365;
    week=(ndays%365)/7;
    days=(ndays%365)%7;

    printf("In %d days there is %d years %d weeks %d days",ndays,year,week,days);
}
