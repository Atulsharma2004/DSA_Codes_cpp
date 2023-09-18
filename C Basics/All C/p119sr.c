#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50], str2[50];
    printf("Enter the  1st string\n");
    gets(str1);
    printf("Enter the  2nd string\n");
    gets(str2);
    strupr(str1);
    strlwr(str2);
    puts("Reverse of case of 1st string is:");
    puts(str1);
    puts("Reverse of case of 2nd string is:");
    puts(str2);
}