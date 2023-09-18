#include <stdio.h>
#include <math.h>
extern double __cdecl round(double);
int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        double y;
        y = (x - 1) / 25;
        int z;
        z = round(y) + 1;
        printf("%d", z);
    }
    return 0;
}