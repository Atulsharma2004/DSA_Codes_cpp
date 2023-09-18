//Write a C program to read a password until it is correct. For wrong password print "Incorrect password" 
//    and for correct password print "Correct password" and quit the program. The correct password is 1234.

#include<stdio.h>
void main()
{
    int pass=1234;
    int i, n;
    printf("Enter the password\n");
    scanf("%d",&n);
    while(n!=pass)
    {
        printf("Incrroct password\n");
        printf("Enter again\n");
        scanf("%d",&n);
    } 
    printf("Correct password"); 
}