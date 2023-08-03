#include <stdio.h>
int main(void)
{
    long long T;
    long long N, R1, P1, S1, R2, P2, S2;
    scanf("%lld", &T);
    long long t;
    for (t = 1; t <= T; t++)
    {
        scanf("%lld", &N);
        scanf("%lld %lld %lld", &R1, &P1, &S1);
        scanf("%lld %lld %lld", &R2, &P2, &S2);
        long long numWins = 0;
        if (R1 >= S2)
        {
            numWins += S2;
        }
        else
        {
            numWins += R1;
        }
        if (P1 >= R2)
        {
            numWins += R2;
        }
        else
        {
            numWins += P1;
        }
        if (S1 >= P2)
        {
            numWins += P2;
        }
        else
        {
            numWins += S1;
        }
        if (numWins > ((N + 1) / 2)) //instead of ceil function
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}