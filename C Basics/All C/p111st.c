//WAP to create record of 15 players of the Indian cricket team having fields player name, state name, experience, batting average, strike rate.
//Then print name and strike rate of those players whose experience is more than 10 years.

#include<stdio.h>
struct player
{
    char name[20];
    char state[20];
    int exp;
    float avgB;
    float sr;
};
void main()
{
    int i;
    struct player p[5];
    printf("Enter the whole detail of 5 players\n");
    for(i=0;i<5;i++)
    {
        scanf("%s%s%d%f%f",p[i].name,p[i].state,&p[i].exp,&p[i].avgB,&p[i].sr);
    }
    printf("Name and strike rate of those players whose experience is more than 10 years.\n");
    for(i=0;i<5;i++)
    {
        if(p[i].exp>10)
        {
            printf("%s\t%f\n",p[i].name,p[i].sr);
        }
    }
    
}
