#include <stdio.h>
int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    char forgottenLang[N][6];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", forgottenLang[i]);
    }
    int found[N];
    for (int i = 0; i < N; i++)
    {
        found[i] = 0;
    }
    for (int i = 0; i < K; i++)
    {
        int L;
        scanf("%d", &L);
        char modernLang[L][6];
        for (int j = 0; j < L; j++)
        {
            scanf("%s", modernLang[j]);
        }
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (strcmp(forgottenLang[k], modernLang[j]) == 0)
                {
                    found[k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (found[i] == 1)
        {
            printf("YES ");
        }
        else
        {
            printf("NO ");
        }
    }
    return 0;
}