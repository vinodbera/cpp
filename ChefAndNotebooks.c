#include <stdio.h>

int main(void)
{
    long long T;
    scanf("%lld", &T);
    while (T--)
    {
        long long X, Y, K, N;
        scanf("%lld %lld %lld %lld", &X, &Y, &K, &N);
        long long P[N], C[N];
        for (long long i = 0; i < N; i++)
        {
            scanf("%lld %lld", &P[i], &C[i]);
        }
        int count = 0;
        for (long long i = 0; i < N; i++)
        {
            if (P[i] >= (X - Y))
            {
                if (C[i] <= K)
                {
                    count++;
                    printf("LuckyChef\n");
                    break;
                }
            }
        }
        if (count == 0)
        {
            printf("UnluckyChef\n");
        }
    }
    return 0;
}