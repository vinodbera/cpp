#include<stdio.h>
int main(){
    int arr[9]={8,5,7,3,1,4,9,6,1};
    int i,j;
    for(i=0; i<9; i++){
        int min = 1000, index;
        for(j = i; j<9; j++){
            if(arr[j]<min){
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    for(i=0;i<9;i++){
        printf("%d",arr[i]);
    }
}