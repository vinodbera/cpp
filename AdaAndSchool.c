#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int N, M;
        scanf("%d %d", &N, &M);
        if ((N * M) % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}