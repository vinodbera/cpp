#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        if (n % 2 == 0)
        {
            if (abs(a) > abs(b))
            {
                printf("%d\n", 1);
            }
            if (abs(a) < abs(b))
            {
                printf("%d\n", 2);
            }
            if (abs(a) == abs(b))
            {
                printf("%d\n", 0);
            }
        }
        else
        {
            if (a > b)
            {
                printf("%d\n", 1);
            }
            if (a < b)
            {
                printf("%d\n", 2);
            }
            if (a == b)
            {
                printf("%d\n", 0);
            }
        }
    }
    return 0;
}