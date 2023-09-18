#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter the  1st string\n");
    gets(str1);
    printf("Enter the  2nd string\n");
    gets(str2);
    strcat(str1, str2);
    printf("Concatinated string is\n");
    puts(str1);
}