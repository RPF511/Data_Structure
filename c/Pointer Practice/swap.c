#include "swap.h"

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printarray(int *arr, int num){
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}