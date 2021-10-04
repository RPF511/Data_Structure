#include "multiplearray.h"

int** mk_2dim_array(int m, int n){
    int **temp = (int **)malloc(sizeof(int *)*m);
    temp[0] = (int *)malloc(sizeof(int)*m*n);
    for(int i=1; i<m; i++){
        temp[i] = temp[i-1] + n;
    }
    return temp;
}

void delete_2dim_array(int **arr){
    free(arr[0]);
    free(arr);
}

void print_2dim_array(int **arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != INT_MAX){
                printf("%3d ",arr[i][j]);
            }
            else{
                printf("MAX ");
        }
        }
        printf("\n");
    }
}

void scanf_2dim_array(int **arr,int m, int n){
    for(int i=0; i<m*n; i++){
        scanf("%d",arr[0]+i);
    }
}

void copy_2dim_array(int **arr, int **from,int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = from[i][j];
        }
    }
}

void input_2dim_array(int **arr, int *from, int size){
    for(int i=0; i<size; i++){
        arr[0][i] = from[i];
    }
}

void print_array(int *arr,int size){
    for(int i=0;i<size;i++){
        if(arr[i] != INT_MAX){
            printf("%d ",arr[i]);
        }
        else{
            printf("M ");
        }
    }
    printf("\n");
}