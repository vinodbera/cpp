#include <stdio.h>
#include <limits.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    int t;
    for (t = 1; t <= T; t++)
    {
        long long x;
        scanf("%lld", &x);
        printf("0 %lld\n", x);
    }
    return 0;
}
