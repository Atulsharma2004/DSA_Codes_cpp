#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    /*char str[]="Hello world";
    int l;
    l= strlen(str);
    printf("Length of string=%d",l);*/
    
    int l=0,i=0;
    printf("Enter the string\n");
    gets(str);
    while(str[i]!='\0')
    {
        l++;
        i++;
    }
    printf("Length of string=%d",l);
    //int l= strlen(str);
    //printf("Length of string=%d",l);
}