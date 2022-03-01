#include <stdio.h>

int main(void){
    int var;
    int * ptr = &var;
    printf("what\'s in ptr : %p\n",ptr);
    printf("ptr + 1 : %p\n",ptr + 1);
    printf("ptr + 2 : %p\n",ptr + 2);
    printf("ptr + 3 : %p\n",ptr + 3);
    printf("ptr - 1 : %p\n\n",ptr - 1);
    double dvar;
    double * dptr = &dvar;
    printf("what\'s in dptr : %p\n",dptr);
    printf("dptr + 1 : %p\n",dptr + 1);
    printf("dptr + 2 : %p\n",dptr + 2);
    printf("dptr + 3 : %p\n",dptr + 3);
    printf("dptr - 1 : %p\n\n",dptr - 1);
    return 0;
}