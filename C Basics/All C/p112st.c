//WAP to store two dates to store date use a structure having 3 members day,month and year,then
//print whwather dates are same or not.

#include<stdio.h>
struct dates
{
    int day;
    int month;
    int year;
};
void main()
{
    struct dates d[2];
    int i;
    printf("Enter the 2 dates\n");
    for(i=0;i<2;i++)
    {
        scanf("%d%d%d",&d[i].day,&d[i].month,&d[i].year);
    }
    for(i=0;i<1;i++)
    {
        if(d[i].day==d[i+1].day && d[i].month==d[i+1].month && d[i].year==d[i+1].year)
        {
            printf("Both dates are same");
        }
        else
        {
            printf("Dates are not same.");
        }
    }
}