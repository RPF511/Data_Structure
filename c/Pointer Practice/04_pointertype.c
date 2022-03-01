#include <stdio.h>
int main(void){
    int a;
    int *iptr = &a;
    double b;
    double *dptr = &b;
    char c;
    char *cptr = &c;
    float d;
    float *fptr = &d;
    long e;
    long *lptr = &e;
    printf("size of pointer variables\n\n");
    printf("size of    int pointer variable : %ld byte\n",sizeof(iptr));
    printf("size of double pointer variable : %ld byte\n",sizeof(dptr));
    printf("size of   char pointer variable : %ld byte\n",sizeof(cptr));
    printf("size of  float pointer variable : %ld byte\n",sizeof(fptr));
    printf("size of   long pointer variable : %ld byte\n",sizeof(lptr));

    printf("\nsize of pointer variables\n\n");
    printf("size of            int variable : %ld byte\n",sizeof(int));
    printf("size of    int pointer variable : %ld byte\n\n",sizeof(int *));
    printf("size of         double variable : %ld byte\n",sizeof(double));
    printf("size of double pointer variable : %ld byte\n\n",sizeof(double *));
    printf("size of           char variable : %ld byte\n",sizeof(char));
    printf("size of   char pointer variable : %ld byte\n\n",sizeof(char *));
    printf("size of          float variable : %ld byte\n",sizeof(float));
    printf("size of  float pointer variable : %ld byte\n\n",sizeof(float *));
    printf("size of           long variable : %ld byte\n",sizeof(long));
    printf("size of   long pointer variable : %ld byte\n",sizeof(long *));
    return 0;
}