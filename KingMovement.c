#include <stdio.h>
#include <math.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int R, C, K;
        scanf("%d %d %d", &R, &C, &K);
        int count = 0;
        for (int r = 1; r <= 8; r++)
        {
            for (int c = 1; c <= 8; c++)
            {
                if ((abs(R - r) <= K) && (abs(C - c) <= K))
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}