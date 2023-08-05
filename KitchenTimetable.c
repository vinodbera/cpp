#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    long long A[N], B[N], i;
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &B[i]);
    }
    int count = 0;
    int timeUsed;
    if (A[0] < B[0])
    {
        timeUsed = A[0];
    }
    else
    {
        timeUsed = B[0];
        count++;
    }
    for (i = 1; i < N; i++)
    {
        if ((A[i] - A[i - 1]) < B[i])
        {
            timeUsed = A[i];
        }
        else
        {
            timeUsed += B[i];
            count++;
        }
    }
    printf("%d", count);
    return 0;
}