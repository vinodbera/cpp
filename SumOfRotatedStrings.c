#include <stdio.h>
int main(void)
{
    char s1[4];
    scanf("%s", s1);
    int i = 0;
    int sum = 0;
    char s2[4];
    char s3[4];
    for (i = 0; i < 3; i++)
    {
        s2[i] = s1[i + 1];
    }
    s2[2] = s1[0];
    for (i = 0; i < 3; i++)
    {
        s3[i] = s2[i + 1];
    }
    s3[2] = s2[0];
    int num1 = 0, num2 = 0, num3 = 0;
    for (i = 0; i < 3; i++)
    {
        num1 *= 10;
        num1 += (s1[i] - '0');
        num2 *= 10;
        num2 += (s2[i] - '0');
        num3 *= 10;
        num3 += (s3[i] - '0');
    }
    printf("%d", num1 + num2 + num3);
    return 0;
}