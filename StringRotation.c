#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    char t[101];
    scanf("%s", s);
    scanf("%s", t);
    int flag = 0;
    // rotating s
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        char temp = s[0];
        for (int j = 0; j < len - 1; j++)
        {
            s[j] = s[j + 1];
        }
        s[len - 1] = temp;
        s[len] = '\0';
        if (strcmp(s, t) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}