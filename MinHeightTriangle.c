#include <stdio.h>
#include <math.h>
int main(){
    int a, b, h;
    scanf("%d %d", &b, &a);
    h = ceil((2.0 * a) / b);
    printf("%d", h);
    return 0;
}