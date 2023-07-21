#include <stdio.h>

int main(){
    int n, maxDraws;
    scanf("%d",&n);
    //n colors of socks mean 2n total socks.
    maxDraws = ((2*n)/2)+1;
    printf("Maximum number of draws is %d \n", maxDraws);
    return 0;
}