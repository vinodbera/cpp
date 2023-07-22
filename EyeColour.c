#include<stdio.h>

int main(){
    char eyeP1, eyeP2, R, G, B;
    scanf("%c %c", &eyeP1, &eyeP2);
    if (eyeP1 == 'R' || eyeP2 == 'R')
        printf("R");
    else if (eyeP1 == 'B' || eyeP2 == 'B')
        printf("B");
    else
        printf("G");
    return 0;
}