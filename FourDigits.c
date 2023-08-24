#include <stdio.h>
int main(void)
{
    char s[5];
    scanf("%s", s);
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    if (len == 4)
    {
        printf("%s", s);
    }
    else
    {
        char S[5];
        int i = 3;
        S[4] = '\0';
        while (i >= 0)
        {
            if (len > 0)
            {
                S[i] = s[len - 1];
                len--;
                i--;
            }
            else
            {
                S[i] = '0';
                i--;
            }
        }
        printf("%s", S);
    }
    return 0;
}