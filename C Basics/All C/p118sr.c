#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter the  1st string\n");
    gets(str1);
    printf("Enter the  2nd string\n");
    gets(str2);
    int a = strcmp(str1, str2);
    printf("After comparing both string :\n");
    printf("%d\n",a);
    if(a==0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are equal");
    }
}