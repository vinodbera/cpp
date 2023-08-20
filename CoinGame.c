#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int coins = 0;
    int coinsLHR = 0;
    int coinsRHR = 0;
    for (i = 0; i < n; i += 2)
    {
        coinsLHR += a[i];
    }
    for (i = 1; i < n; i += 2)
    {
        coinsRHR += a[i];
    }
    if (coinsRHR > coinsLHR)
    {
        coins = 2 * coinsLHR;
    }
    else
    {
        coins = 2 * coinsRHR;
    }
    printf("%d", coins);
    return 0;
}