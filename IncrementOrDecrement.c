#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N%4==0){
        printf("%d", ++N);
    }
    else {
        printf("%d", --N);
    }
}