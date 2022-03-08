#include <stdio.h>
int main(void){
    //int arr[3] = {0,};
    int arr[3] = {1,2,3};
    int noa = 3;
    for(int i=0;i<noa;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");

    for(int i=0;i<noa;i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}