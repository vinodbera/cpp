#include <stdio.h>
#include <math.h>

int main(){
    int n,m,min;
    scanf("%d %d", &n,&m);
    min = ceil(n/2.0)*ceil(m/2.0);
    printf("%d",min);
}