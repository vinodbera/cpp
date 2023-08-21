#include <stdio.h>
int main()
{
    int M, x, y;
    scanf("%d %d %d", &M, &x, &y);
    int houseCop[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &houseCop[i]);
    }
    int houseSafe[101];
    for (int i = 0; i <= 100; i++)
    {
        houseSafe[i] = 1;
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (j >= (houseCop[i] - (x * y)) && j <= (houseCop[i] + (x * y)))
            {
                houseSafe[j] = 0;
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (houseSafe[i] == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}