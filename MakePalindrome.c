#include <stdio.h>
int main(void)
{
    char s[101];
    scanf("%s", s);
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    int count = 0;
    int i, j;
    for (i = 0, j = (len - 1); i < len / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}