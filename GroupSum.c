#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    int i;
    int sum = 0;
    for(i=((k*k)+(k-1));i>((k-1)*(k-1)+(k-2));i--){
        if(i%2!=0){
            sum+=i;
        }
        
    }
    printf("%d",sum);
}