#include<stdio.h>
void main()
{
    int i=0, l=0;
    char s[50];
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    printf("Length of string is: %d",l);
}