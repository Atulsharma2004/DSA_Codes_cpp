#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50];
    printf("Enter the  1st string\n");
    gets(str1);
    strrev(str1);
    printf("Reversed string is\n");
    puts(str1);
}