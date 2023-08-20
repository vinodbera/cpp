#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    int t;
    for (t = 1; t <= T; t++)
    {
        char s[101];
        scanf("%s", s);
        int i = 0;
        int numa = 0, numb = 0;
        while (s[i] != '\0')
        {
            if (s[i] == 'a')
            {
                numa++;
            }
            else
            {
                numb++;
            }
            i++;
        }
        if (numa < numb)
        {
            printf("%d\n", numa);
        }
        else
        {
            printf("%d\n", numb);
        }
    }
    return 0;
}