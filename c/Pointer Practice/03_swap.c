#include <stdio.h>
/*
swap함수 만드세요
*/

int main(void){
    int a = 10, b = 20;
    printf("a: %d, b: %d\n",a,b);
    swap(&a,&b);                 //이 형태로 전달하는 것
    printf("a: %d, b: %d\n",a,b);
    return 0;
}