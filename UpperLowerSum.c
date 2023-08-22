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
    int sumUpper = 0;
    int sumLower = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            sumUpper += mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sumLower += mat[i][j];
        }
    }
    printf("%d\n%d", sumUpper, sumLower);
    return 0;
}