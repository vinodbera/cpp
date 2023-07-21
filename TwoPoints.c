#include <stdio.h>

int main(){
    int px, py, qx, qy, rx, ry;
    scanf("%d %d %d %d", &px, &py, &qx, &qy);
    rx = qx + (qx - px);
    ry = qy + (qy - py);
    printf("%d %d", rx, ry);
}