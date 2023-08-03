#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int score = 0;
        for (int j = 0; j < 5; j++)
        {
            int a[5];
            scanf("%d", &a[j]);
            if (a[j] == 1)
            {
                score++;
            }
        }
        if (score == 5)
        {
            printf("Jeff Dean\n");
        }
        if (score == 4)
        {
            printf("Hacker\n");
        }
        if (score == 3)
        {
            printf("Senior Developer\n");
        }
        if (score == 2)
        {
            printf("Middle Developer\n");
        }
        if (score == 1)
        {
            printf("Junior Developer\n");
        }
        if (score == 0)
        {
            printf("Beginner\n");
        }
    }
    return 0;
}