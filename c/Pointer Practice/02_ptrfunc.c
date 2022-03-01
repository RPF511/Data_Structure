#include <stdio.h>
void really(int *ptr){
    *ptr = 20;
    /*
    printf("%p %d\n",ptr,*ptr);
    *ptr++ ;
    printf("%p %d\n",ptr,*ptr);
    ptr++;
    printf("%p %d\n",ptr,*ptr);
    */
}

int main(void){
    int n = 10;
    int *ptr = &n;
    printf("before %d\n",n);
    really(ptr);
    printf("after %d\n",n);
    return 0;
}