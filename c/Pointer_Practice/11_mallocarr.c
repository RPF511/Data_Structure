#include <stdio.h>
#include <stdlib.h>
void printarray(int *arr, int num){
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(void){
    int num;
    int *arr;
    scanf("%d",&num);

    arr = (int *)malloc(sizeof(int)*num);
    
    for(int i=0;i<num;i++){
        scanf("%d",arr + i);
        //scanf("%d",&arr[i]);
    }
    
    printarray(arr,num);
    free(arr);
    return 0;
}