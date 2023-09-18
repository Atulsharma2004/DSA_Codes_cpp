#include<stdio.h>
struct info1
{
    int contact;
    char email[50];
};
struct info2
{
    int fcontact;
    char add[50];
};
union info
{
    struct info1 I1;
    struct info2 I2;    
};
struct student
{
int rollno;
char name[20];
char branch[50];
int per;
union info I;
};


void main()
{
    int i;
    struct student s[10];
    printf("Enter the rollno,name, branch and percentage of 5 students\n");
    for(i=0;i<5;i++)
    {
        scanf("%d%s%s%f",&s[i].rollno, s[i].name, s[i].branch, &s[i].per);
    }
    
    printf("Enter contact and email for scholar students:\n");
    for(i=0;i<5;i++)
    {
        if(s[i].per>85)
        {
            printf("Enter contact and email for scholar students:\n");
            scanf("%d%s",&s[i].I.I1.contact, s[i].I.I1.email);
        }
        else
        {
            printf("Enter father's contact and address for non-scholar students:\n");
            scanf("%d%s",&s[i].I.I2.fcontact, s[i].I.I2.add);
        }
    }
    for(i=0;i<5;i++)
    {
        printf("The detail of scholar students are:\n");
        printf("%d\t%s\t%s\t%d\t%d\t%s",s[i].rollno, s[i].name, s[i].branch, s[i].per, s[i].I.I1.contact, s[i].I.I1.email);

        printf("The detail of non-scholar students are:\n");
        printf("%d\t%s\t%s\t%d\t%d\t%s",s[i].rollno, s[i].name, s[i].branch, s[i].per, s[i].I.I2.fcontact, s[i].I.I2.add);
    }
}