#include <stdio.h>

#include <stdlib.h>



void display(const char *title, double p[3][4][3], int x, int y, int z) {
    int i, j, k;
    printf("\nPrinting '%s', array\n", title);
    for ( i=0; i<x; i++ ) {
        printf("[ ");
        for ( j=0; j<y; j++ ) {
            printf("{");
            for ( k=0; k<z; k++ ) {
                printf("%3.0f", p[i][j][k]);
            }
            printf(" }");
            if ( j != y-1 ) {
                printf(", ");
            }
        }
        printf(" ]\n");
    }
    printf("\n");
}



int main(void) {
    double a[3][4][3] = {
        { {  1,  2,  3 }, {  4,  5,  6 }, {  7,  8,  9 }, { 10, 11, 12 } },
        { { 13, 14, 15 }, { 16, 17, 18 }, { 19, 20, 21 }, { 22, 23, 24 } },
        { { 25, 26, 27 }, { 28, 29, 30 }, { 31, 32, 33 }, { 34, 35, 36 } },
    };

    display("a", a, 3, 4, 3);




    double (*b)[4][3]; // array_pointer[4][3]
    b = a;
    printf("sizeof double[3][4][3] %ld",sizeof(double[3][4][3]));
    /*b = (double(*)[4][3])malloc(sizeof(double[3][4][3]));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                b[i][j][k] = a[i][j][k];
            }
        }
    }*/

    display("b", b, 3, 4, 3);




    double *(*c)[4];
    printf("sizeof double*[3][4] %ld\n",sizeof(double*[3][4]));
    //c = (double*(*)[4])malloc(sizeof(double*[4][3]));
    //c = (double*(*)[4])malloc(sizeof(double*) *3*4);
    //c = (double*(*)[4])malloc(sizeof(double*) * 12);
    c = (double*(*)[4])malloc(sizeof(double*[3][4]));

   // printf("c %p &c %p\n",c,&c);
    for ( int i=0; i<3; i++) { // layer
        for ( int j=0; j<4; j++ ) { // row
            //printf("i %d j %d %p \n",i,j,&c[i][j]);
            c[i][j] = b[i][j];
        }
    }

    //print c

    printf("printing 'c', array\n");
    for (int i=0; i<3; i++ ) {
        printf("[ ");
        for (int j=0; j<4; j++ ) {
            printf("{");
            for (int k=0; k<3; k++ ) {
                printf("%3.0f", c[i][j][k]);
            }
            printf(" }");
            if ( j != 4-1 ) {
                printf(", ");
            }
        }
        printf(" ]\n");
    }
    printf("\n");




    double ***d;
    printf("sizeof double**[3] %ld\n",sizeof(double**[3]));
    //d = (double***)malloc(sizeof(double**[3]));
    d = (double***)malloc(sizeof(double**)*3);
    for ( int i=0; i<3; i++ ) {
        d[i] = c[i];
    }
    printf("printing 'd', array\n");
    for (int i=0; i<3; i++ ) {
        printf("[ ");
        for (int j=0; j<4; j++ ) {
            printf("{");
            for (int k=0; k<3; k++ ) {
                printf("%3.0f", d[i][j][k]);
            }
            printf(" }");
            if ( j != 4-1 ) {
                printf(", ");
            }
        }
        printf(" ]\n");
    }
    printf("\n");



    free(d);
    free(c);
    //free(b);


    printf("\nAssigned c by b\n");
    printf("a[2][3] = %p\n", a[2][3]);
    printf("b[2][3] = %p\n", b[2][3]);
    printf("c[2][3] = %p\n", c[2][3]);   
    printf("*c[2][3] = %3.0f\n", *(*(b+2))[3]);


    printf("\nAssigned d by c\n");
    printf("c[2] = %p\n", c[2]);
    printf("**c[2] = %3.0f\n", **c[2]);
    printf("d[2] = %p\n", d[2]);
    printf("**d[2] = %3.0f\n", **d[2]);
    return 0;
}