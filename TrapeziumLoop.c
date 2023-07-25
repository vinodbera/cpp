#include<stdio.h>

int main()
{
    int T;
    int x;
    int n;
    int i;
    scanf("%d",&T);
    for (i=0; i<T;i++)
    {
        scanf("%d",&x);
        n = 360/(180-(2*x));
        printf("%d",n);
    }
}