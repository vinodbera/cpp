#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int aN;
        scanf("%d", &aN);
        int a[aN];
        for (int i = 0; i < aN; i++)
        {
            scanf("%d", &a[i]);
        }
        int bN;
        scanf("%d", &bN);
        int b[bN];
        for (int i = 0; i < bN; i++)
        {
            scanf("%d", &b[i]);
        }
        int result[aN];
        for (int i = 0; i < aN; i++)
        {
            if ((a[i] * 10 + b[i]) > (b[i] * 10 + a[i]))
            {
                result[i] = (a[i] * 10 + b[i]);
            }
            else
            {
                result[i] = (b[i] * 10 + a[i]);
            }
        }
        for (int i = 0; i < aN; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
    return 0;
}