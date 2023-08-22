#include <stdio.h>
int main(void)
{
    int aR, aC, bR, bC;
    scanf("%d %d", &aR, &aC);
    int A[aR][aC];
    for (int i = 0; i < aR; i++)
    {
        for (int j = 0; j < aC; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d", &bR, &bC);
    int B[bR][bC];
    for (int i = 0; i < bR; i++)
    {
        for (int j = 0; j < bC; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    int C[aR][bC];
    for (int i = 0; i < aR; i++)
    {
        for (int j = 0; j < bC; j++)
        {
            C[i][j] = 0;
        }
    }
    if (aC == bR)
    {
        for (int i = 0; i < aR; i++)
        {
            for (int j = 0; j < bC; j++)
            {
                for (int k = 0; k < aC; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
                printf("%d ", C[i][j]);
            }
        }
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}