#include <stdio.h>
int main(){
    long long k;
    scanf("%lld", &k);
    long long i;
    long long sum = 0;
    for(i=((k*k)+(k-1));i>((k-1)*(k-1)+(k-2));i--){
        if(i%2!=0){
            sum+=i;
        }
        
    }
    printf("%lld",sum);
}