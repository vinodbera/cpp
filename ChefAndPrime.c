#include <stdio.h>
int main()
{
    int T;
    int t;
    scanf("%d", &T);
    for (t = 0; t < T; t++)
    {
        int N;
        long long sum;
        scanf("%d", &N);
        long long A[N];
        long long n;
        for (n = 0; n < N; n++)
        {
            scanf("%lld", &A[n]);
        }
        sum = 0;
        for (n = 0; n < N; n++)
        {
            long long numDigits = 0;
            if (A[n] == 0)
            {
                numDigits = 1;
            }
            else
            {
                while (A[n] > 0)
                {
                    A[n] /= 10;
                    numDigits++;
                }
            }
            sum += numDigits;
        }
        int count = 0;
        int i;
        for (i = 1; i <= sum; i++)
        {
            if (sum % i == 0)
            {
                count++;
            }
        }
        if (count > 2)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}