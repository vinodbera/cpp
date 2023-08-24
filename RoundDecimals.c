#include <stdio.h>
int main(void)
{
    char x[100];
    scanf("%s", x);
    int i = 0, len = 0;
    int flag = 0;
    while (x[i] != '.')
    {
        len++;
        i++;
    }
    if (x[len + 1] - '0' < 5)
    {
        x[len] = '\0';
        printf("%s\n", x);
    }
    else if (x[len - 1] != '9')
    {
        x[len] = '\0';
        x[len - 1] = x[len - 1] - '0' + 1 + '0';
        printf("%s\n", x);
    }
    else
    {
        x[len] = '\0';
        while (len > 0)
        {
            if (x[len - 1] == '9')
            {
                while(x[len-1]=='9'){
                    x[len - 1] = '0';
                    flag++;
                    len--;
                }
                x[len - 1] = x[len - 1] - '0' + 1 + '0';
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%s", x);
        }
        else
        {
            printf("%d%s", 1, x);
        }
    }
    return 0;
}