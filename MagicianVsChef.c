#include <stdio.h>
int main(void)
{
    int N, X, S;
    scanf("%d %d %d", &N, &X, &S);
    for (int s = 0; s < S; s++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        if (A == X)
        {
            X = B;
        }
        else if (B == X)
        {
            X = A;
        }
    }
    printf("%d", X);
    return 0;
}