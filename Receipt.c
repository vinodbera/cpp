#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int p;
        scanf("%d", &p);
        int highestMenuPrice = 1;
        while (highestMenuPrice <= p && highestMenuPrice <= 2048)
        {
            highestMenuPrice *= 2;
        }
        highestMenuPrice /= 2;
        int numMenus = 1;
        int totalPrice = highestMenuPrice;
        int menuPrice = highestMenuPrice;
        while (totalPrice <= p && menuPrice != 0)
        {
            if (totalPrice + menuPrice <= p)
            {
                numMenus++;
                totalPrice += menuPrice;
            }
            else
            {
                menuPrice /= 2;
            }
        }
        printf("%d\n", numMenus);
    }
    return 0;
}