#include <stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void){
    int a = 10, b = 20;
    printf("a: %d, b: %d\n",a,b);
    swap(&a,&b);           //이 형태로 전달하는 것  - main함수는 보여줘야 함
    printf("a: %d, b: %d\n",a,b);
}