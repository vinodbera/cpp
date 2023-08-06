#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int i;
    int W[N];
    int moves = 0;
    int idxMin, idxMax;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &W[i]);
    }
    int max = -1000;
    int min = 100000;
    for (i = 0; i < N; i++)
    {
        if (W[i] < min)
        {
            min = W[i];
            idxMin = i;
        }
        if (W[i] > max)
        {
            max = W[i];
            idxMax = i;
        }
    }
    while (W[idxMin] != W[idxMax])
    {
        for (i = 0; i < N; i++)
        {
            if (W[i] < min)
            {
                min = W[i];
                idxMin = i;
            }
            if (W[i] > max)
            {
                max = W[i];
                idxMax = i;
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (i = idxMax)
            {
                continue;
            }
            W[i] += 1;
            moves++;
            if (W[idxMin] == W[idxMax])
            {
                break;
            }
        }
    }
    printf("%d", moves);
    return 0;
}