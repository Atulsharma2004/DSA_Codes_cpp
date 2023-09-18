//Write a c program to compare two strings by using “String.h” header file.
//Hint: Use function strcmp(str1,str2).

#include<stdio.h>
#include<string.h>
void main()
{
    int val;
    char str1[20], str2[20];
    printf("Enter two strings to compare\n");
    scanf("%s%s",str1, str2);
    val = strcmp(str1, str2);
    //comparing both strings
    if(val==0)
    printf("Both strings are same");
    else
    printf("Both strings are not same");
}
