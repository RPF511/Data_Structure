#include <stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(/*???*/){
    /*???*/
}
void printarray(/*???*/){
    /*???*/
}

int main(void){
    int a[10] = {3,0,2,7,9,8,4,1,5,6};
    int num = 10;
    printf("before sort : ");
    printarray(a,10);
    bubblesort(a,num);
    printf("after sort  : ");
    printarray(a,10);
    return 0;
}