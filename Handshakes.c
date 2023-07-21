#include <stdio.h>

int main(){
    int num;
    long long handshakes = 0;
    scanf("%d", &num);
    for (int i=num-1; i>0;i--){
        handshakes+=i;
    }
    printf("%lld",handshakes);

}