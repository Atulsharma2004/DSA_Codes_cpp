// WAP to reverse the case of a character.

#include<stdio.h>
void main()
{
    int i=0;
    char s[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s",s);
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        i++;
    }
    printf("Reverse of case of string is:\n%s",s);
}