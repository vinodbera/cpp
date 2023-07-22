#include <stdio.h>

int main(){
    int a[3], b[3], as=0, bs=0;
    int i;

    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            as+=1;
        }
        else if (b[i]>a[i]){
            bs+=1;
        }
    }
    printf("%d %d", as,bs);
}