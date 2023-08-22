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
    int sum = 0;
    int i = 0, j = 0;
    while (i < n)
    {
        sum += mat[i][j];
        i++;
        j++;
    }
    j = m - 1;
    i = 0;
    while (i < n)
    {
        if (i == j)
        {
            i++;
            j--;
            continue;
        }
        else
        {
            sum += mat[i][j];
        }
        i++;
        j--;
    }
    printf("%d", sum);
    return 0;
}