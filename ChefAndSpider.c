#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d\n", &T);
    for (int t = 1; t <= T; t++)
    {
        long long N;
        scanf("%lld", &N);
        long long distCovered = 1;
        long long numLeaps = 1;
        while (distCovered < N)
        {
            distCovered += ((numLeaps * 9) + 1);
            numLeaps++;
        }
        printf("Case #%d: %lld\n", t, numLeaps);
    }
    return 0;
}