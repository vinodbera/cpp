#include<stdio.h>

int main(){
    int X;
    float Y,remBal;
    scanf("%d %f", &X,&Y);
    if (X<=Y-0.50 && X%5==0){
        remBal=Y-X-0.50;
    }
    
    else {
        remBal = Y;
    }
    printf("%0.2f", remBal);
}