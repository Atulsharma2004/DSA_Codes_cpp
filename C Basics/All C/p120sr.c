//WAP to check the given string is palindrome or not.

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter the  1st string\n");
    gets(str1);
    strcpy(str2, str1);
    strrev(str1);
    printf("Reversed string is\n");
    puts(str1);
    if(strcmp(str1, str2)==0)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not  a palindrome");
    }
}