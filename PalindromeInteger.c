#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    while (N)
    {
        int count = 0;
        int rev = 0;
        for (int i = 1; i <= N/2; i++)
        {
            if (N % i == 0)
            {
                count++;
            }
        }
        int revDigits = N;
        if (count == 1)
        {
            while (revDigits > 0)
            {
                rev = (rev * 10) + (revDigits % 10);
                revDigits /= 10;
            }
            if (rev == N)
            {
                printf("%d", N);
                break;
            }
        }
        N++;
    }
    return 0;
}