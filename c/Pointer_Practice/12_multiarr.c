#include <stdio.h>
int main(void){
    int arr2[3][4];

    printf("arr : %p\n",arr2);
    printf("arr[0] : %p\n",&arr2[0]);
    printf("arr[1] : %p\n",&arr2[1]);

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("arr[%d][%d] : %p\n",i,j,&arr2[i][j]);
        }
    }
    return 0;
}
