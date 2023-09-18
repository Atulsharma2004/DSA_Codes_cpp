//Write a c program to find the length and reverse of a string by using “String.h” header file.
//Ex: Input: Techpile        Output:   Length is:8    Reverse is: eliphceT

#include<stdio.h>
#include<string.h>
void main()
{
    int len; 
    char str1[20];
    printf("Enter the string to find length and reverse\n");
    scanf("%s", str1);
     len= strlen(str1);
     printf("Length of string is \n%d\n",len);
     printf("Reverse of string is \n%s",strrev(str1));
}
