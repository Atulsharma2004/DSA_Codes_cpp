//WAP to create record of 100 students having fields: student (roll no., name, course, branch and percentage),then
//print the record of that students having percentage more than 80%.

#include<stdio.h>
struct student
    {
        int rollno;
        char name[20];
        char course[50];
        char branch[50];
        float per;
    };

void main()
{
    int i;
    struct student s[5];
    printf("Enter the whole detail of every students:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d%s%s%s%f",&s[i].rollno,s[i].name,s[i].course,s[i].branch,&s[i].per);
    }
    printf("Record of students having percentage more than 80\n");
    for(i=0;i<5;i++)
    {
        if(s[i].per>80)
        {
            printf("%d\t%s\t%s\t%s\t%f\n",s[i].rollno,s[i].name,s[i].course,s[i].branch,s[i].per);
        }
    }
}