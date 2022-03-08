#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%ld ",&stat[i][j]-&stat[0][0]);
            /*if(j == 0 && i!=0){
                if(&stat[i][j] != &stat[i-1][n-1] + 1){
                    printf("worng [%d][%d] : %p ,[%d][%d] : %p\n",i,j,&stat[i][j],i-1,n-1,&stat[i-1][n-1]);
                }
            }
            if(&stat[i][j] != &stat[i][j-1] + 1){
                printf("worng [%d][%d] : %p ,[%d][%d]: %p\n",i,j,&stat[i][j],i,j-1,&stat[i-1][n-1]);
            }*/
        }

        printf("\n");
    }
    /*
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%ld ",&stat[0][n*i + j] - &stat[0][0]);
        }

        printf("\n");
    }*/
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",stat[i][j]);
        }

        printf("\n");
    }
    
    free(stat[0]);
    free(stat);
    return 0;
}