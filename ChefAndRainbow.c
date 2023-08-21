#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int arr[N];
        int i;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        int flag = 1;
        if (arr[0] != 1 || arr[N / 2] != 7)
        {
            flag = 0;
        }
        for (i = 0; i <= N / 2; i++)
        {
            if (arr[i] != arr[N - 1 - i])
            {
                flag = 0;
                break;
            }
        }
        int prev;
        for (i = 1; i <= N / 2; i++)
        {
            prev = arr[i - 1];
            if (arr[i] - prev > 1 || arr[i] - prev < 0)
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}