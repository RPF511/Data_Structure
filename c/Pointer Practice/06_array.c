#include <stdio.h>
int main(void){
    int arr[3];
    //int arr[] = {1,2,3};    -가능
    //int arr[];              -가능?
    
    printf("pointer of arr     : %p\n",arr);
    printf("pointer of arr[0]  : %p\n",&arr[0]);
    printf("pointer of arr[1]  : %p\n",&arr[1]);
    printf("pointer of arr[2]  : %p\n",&arr[2]);

    printf("pointer of arr[3]  : %p  -????\n",&arr[3]);
    printf("pointer of arr[-1] : %p  -????\n",&arr[-1]);
    printf("\nsize of arr : %ld\n",sizeof(arr));

    
    return 0;
}