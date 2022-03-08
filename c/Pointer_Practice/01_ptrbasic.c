#include <stdio.h>

int main(void){
    int n = 10;
    int *ptr = &n;
    printf("\nwhat\'s in variable n : %d\n",n);
    printf("what\'s in variable ptr : %p\n",ptr);
    printf("pointer(location) of the variable n : %p\n",&n);
    printf("pointer(location) of the variable ptr : %p\n",&ptr); 

    printf("\n%p\n",ptr);
    printf("\\\n");
    printf(" |-var n -----|\n");
    printf(" |     %d     |\n",n);
    printf(" |------------|\n");
    
    printf("\n%p\n",&ptr);
    printf("\\\n");
    printf(" |--var ptr --------|\n");
    printf(" |  %p  |\n",ptr);
    printf(" |------------------|\n");
    return 0;  
}