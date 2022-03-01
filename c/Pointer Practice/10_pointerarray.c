#include <stdio.h>

int main(void){
    int a=0, b=1, c=2;
    int * arr[3] = {&a,&b,&c};

    printf("adress of a : %p\n",&a);
    printf("adress of b : %p\n",&b);
    printf("adress of c : %p\n",&c);

    printf("\nwhat\'s in arr\n");
    for(int i=0;i<3;i++){
        printf("%p ",arr[i]);
    }
    printf("\n\n");

    printf("what\'s arr points at\n");
    for(int i=0;i<3;i++){
        printf("%d ",*arr[i]);
    }
    printf("\n\n");

    printf("other way\n");
    for(int i=0;i<3;i++){
        printf("%d ",**(arr + i));
    }
    printf("\n\n");

    printf("other way\n");
    for(int i=0;i<3;i++){
        printf("%d ",*(*(arr + i)+0));
    }
    printf("\n\n");

    printf("other way\n");
    for(int i=0;i<3;i++){
        printf("%d ",*(arr + i)[0]);
    }
    

    
    printf("\n\n");
    return 0;
}