#include <stdio.h>

int main(void){
    char str[30] = "string ends with \\0";
    /* char str[30];
    str = "string ends with \\0";   - 안됨*/
    printf("before\n%s\n\n",str);
    str[10] = '\0';
    printf("after\n%s\n",str);
    str[6] = 0;
    printf("\\0\'s ascii code is 0\n%s\n",str);
    return 0;
}