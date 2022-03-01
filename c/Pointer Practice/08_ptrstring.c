#include <stdio.h>
int main(void){
    char str1[] = "this is string";
    char *str2 = "this is string too";
    /*
    char str3[20];
    str3 = "can we assign like this?"
    
    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);
*//*
    str1[11] = 'a';
    printf("change str1 : %s\n",str1);
    
    str2[0] = 'c';
    printf("change str2 : %s\n",str2);
    
    str2 = "i want to change";
    printf("changed str2 : %s\n",str2);
*/
    *str2[0] = 'c';
    printf("change str2 : %s\n",str2);
    

    return 0;
}