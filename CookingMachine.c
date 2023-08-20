#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int t;
    long long A, B;
    for (t = 1; t <= T; t++)
    {
        scanf("%lld %lld", &A, &B);
        int numOp = 0;
        while (B % A != 0)
        {
            A /= 2;
            numOp++;
        }
        while (A != B)
        {
            A *= 2;
            numOp++;
        }
        printf("%d\n", numOp);
    }
    return 0;
}