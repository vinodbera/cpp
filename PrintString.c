#include <stdio.h>
int main(void)
{
    char S[21];
    scanf("%s", S);
    int len = 0;
    int i = 0;
    while (S[i] != '\0')
    {
        len++;
        i++;
    }
    len -= 1;
    if (S[len] == 'r')
    {
        printf("er");
    }
    else
    {
        printf("ist");
    }
    return 0;
}