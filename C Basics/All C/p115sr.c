#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter the  1st string\n");
    gets(str1);
    printf("Enter the  2nd string\n");
    gets(str2);
    strcpy(str2, str1);
    printf("Copied string is\n");
    puts(str2);
}