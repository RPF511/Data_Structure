#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_2_arr(int **arr, int n, int m){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int n, m;
    scanf("%d %d",&n, &m);
    int **stat;

    stat = (int **)malloc(sizeof(int *)*n);
    stat[0] = (int *)malloc(sizeof(int)*n*m);
    for(int i=1; i<n; i++){
        stat[i] = stat[i-1] + m;
    }

    
    int t = 0;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            stat[i][j]=t++;
        }
    }

    printf("\narray\n");
    print_2_arr(stat, n, m);

    printf("\nthe pointer of array's each element\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%p ",&stat[i][j]);
        }
        printf("\n");
    }

    printf("\nwhat's stat?\n");
    printf("%p\n",&stat);

    printf("\nwhat's stat[n]?\n");
    for(int i = 0;i<n;i++){
        printf("%p ",&stat[i]);
    }
    printf("\n");

    printf("\nwhat's stat[n] stands for?\n");
    for(int i = 0;i<n;i++){
        printf("%p ",stat[i]);
    }
    printf("\n");

    printf("\nstat[0]\n");
    for(int i = 0;i<n*m;i++){
        printf("%d ",stat[0][i]);
    }
    printf("\n");

    printf("\npointer of stat[0]\n");
    for(int i = 0;i<n*m;i++){
        printf("%p ",stat[0] + i);
    }
    printf("\n\n");
    
    free(stat[0]);
    free(stat);
    return 0;
}