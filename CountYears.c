#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int years;
    for(years = 0;a<=b;years++){
        a*=3;
        b*=2;
    }
    printf("%d", years);
}