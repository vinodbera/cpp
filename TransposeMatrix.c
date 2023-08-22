#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int matTranspose[m][n];
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            matTranspose[j][i] = mat[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", matTranspose[j][i]);
        }
        printf("\n");
    }
    return 0;
}