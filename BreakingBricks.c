#include <stdio.h>
int main(void)
{
    int T;
    int S, W1, W2, W3;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int numHits = 0;
        scanf("%d %d %d %d", &S, &W1, &W2, &W3);
        if (S >= W1 + W2)
        {
            if (S >= W1 + W2 + W3)
            {
                numHits++;
            }
            else
            {
                numHits = 2;
            }
        }
        else if (S >= W3 + W2)
        {
            numHits = 2;
        }
        else
        {
            numHits = 3;
        }
        printf("%d\n", numHits);
    }
    return 0;
}