#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int W[N];
    for(int i=0;i<N;i++){
        scanf("%d",&W[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<N;i++){
        if(W[i]<min){
            min=W[i];
        }
    }
    int moves=0;
    for(int i=0;i<N;i++){
        moves+=W[i]-min;
    }
    printf("%d\n", moves);
}


/*Approach 2(Some issues)

#include <stdio.h>
#include <limits.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int i;
    int W[N];
    int moves = 0;
    int idxMin, idxMax;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &W[i]);
    }
    int max = INT_MIN, min = INT_MAX;
    while (min != max)
    {
        max = INT_MIN;
        min = INT_MAX;
        for (i = 0; i < N; i++)
        {
            if (W[i] < min)
            {
                min = W[i];
            }
            if (W[i] > max)
            {
                max = W[i];
                idxMax = i;
            }
        }
        moves += (max - min);
        for (int i = 0; i < N; i++)
        {
            if (i != idxMax)
            {
                W[i] += moves;
            }
        }
    }
    printf("%d", moves);
    return 0;
}*/