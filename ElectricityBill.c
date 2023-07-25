#include<stdio.h>
int main()
{
    int N;
    float bill;
    float totalBill;
    scanf("%d", &N);
    if (N <= 50)
    {
        bill = N * 0.50;
    }
    else if (N <= 150)
    {
        bill = 50 * 0.50 + (N - 50) * 0.75;
    }
    else if (N <= 250)
    {
        bill = 50 * 0.50 + 100 * 0.75 + (N - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (N - 250) * 1.50;
    }
    totalBill = bill + (0.20 * bill);
    printf("%0.2f", totalBill);
    return 0;
}