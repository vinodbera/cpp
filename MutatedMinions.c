#include<stdio.h>
int main(){
    int T,N,K;
    scanf("%d",&T);
    int t;
    for(t=1;t<=T;t++){
        scanf("%d %d",&N,&K);
        int M[N];
        int n;
        for(n=0;n<N;n++){
            scanf("%d",&M[n]);
        }
        int count = 0;
        for (n=0;n<N;n++){
            M[n]+=K;
            if(M[n]%7==0){
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
}