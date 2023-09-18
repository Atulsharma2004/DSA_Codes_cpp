//updation
#include<stdio.h>
#include<conio.h>
void main()
{
    //1 2 4 7 11;
    int i,n=0;  //1+1=2
    for(i=1;i<=11;i=i+n) //i=4+3=7  , 7+4=11=i , 11+5=16 
    {
	    printf("%d  ",i); //i=1 , 2 , 4 , 7 , 11
	    n=n+1; //n=5
    }
    printf("%d%d",i,n);
	getch();
}
