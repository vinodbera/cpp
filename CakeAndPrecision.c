#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char totalBake[150];
        scanf("%s", totalBake);
        int index = 0;
        while (totalBake[index] != '\0')
        {
            index++;
        }
        index--;
        // calculating half time
        if (totalBake[index] == '0')
        {
            while (totalBake[index] == '0')
            {
                totalBake[index] = '9';
                index--;
            }
            totalBake[index] = totalBake[index] - '0' - 1 + '0';
        }
        else
        {
            totalBake[index] = totalBake[index] - '0' - 1 + '0';
        }
        // calculating half time + 2
        
        index=0;
        while (totalBake[index] != '\0')
        {
            index++;
        }
        index--;
        if (totalBake[index] == '8')
        {
            if(index==0){
                printf("%d\n",10);
            }
            else{
                totalBake[index] = '0';
                if (totalBake[index - 1] == '9')
                {
                    while (totalBake[index - 1] == '9')
                    {
                        totalBake[index - 1] = '0';
                        index--;
                    }
                    if (index > 0)
                    {
                        totalBake[index - 1] = totalBake[index - 1] - '0' + 1 + '0';
                        printf("%s\n", totalBake);
                    }
                    else
                    {
                        printf("%d%s\n", 1, totalBake);
                    }
                }
                else
                {
                    totalBake[index - 1] = totalBake[index - 1] - '0' + 1 + '0';
                    printf("%s\n", totalBake);
                }
            }
        }
        else if (totalBake[index] == '9')
        {
            totalBake[index] = '1';
            if (totalBake[index - 1] == '9')
            {
                while (totalBake[index - 1] == '9')
                {
                    totalBake[index - 1] = '0';
                    index--;
                }
                if (index > 0)
                {
                    totalBake[index - 1] = totalBake[index - 1] - '0' + 1 + '0';
                    printf("%s\n", totalBake);
                }
                else
                {
                    printf("%d%s\n", 1, totalBake);
                }
            }
            else
            {
                totalBake[index - 1] = totalBake[index - 1] - '0' + 1 + '0';
                printf("%s\n", totalBake);
            }
        }
        else
        {
            totalBake[index] = totalBake[index] - '0' + 2 + '0';
            printf("%s\n", totalBake);
        }
    }
    return 0;
}