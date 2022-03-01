#include <stdio.h>

void print_2arr(int arr2[][4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%2d ",arr2[i][j]);
        }
        printf("\n");
    }
}

void print_3arr(int arr2[][4][5]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<5;k++){
                printf("%2d ",arr2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}

int main(void){
    int arr2[3][4];
    int arr3[3][4][5];
    int temp = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr2[i][j] = temp++;
        }
    }
    temp = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<5;k++){
                arr3[i][j][k] = temp++;
            }
        }
    }
    printf("\narr2\n");
    print_2arr(arr2);
    printf("\narr3\n");
    print_3arr(arr3);
    return 0;
}