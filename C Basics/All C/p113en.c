#include<stdio.h>
void main()
{
    enum status
    {
        pass, fail, grace
    };
    enum status s1,s2,s3;
    s1=pass;
    s2=fail;
    s3=grace;
    printf("%d,%d,%d",s1,s2,s3);
}