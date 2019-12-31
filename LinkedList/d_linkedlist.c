
#include "d_linkedlist.h"


d_linkedlist * mk_list(void){
    d_linkedlist *temp = (d_linkedlist *)malloc(sizeof(d_linkedlist));
    dlnode *tempnode = (dlnode *)malloc(sizeof(dlnode));

    temp -> size = 0;
    temp -> current = NULL;
    temp -> node = tempnode;

    tempnode -> element = INT_MAX;
    tempnode -> front = tempnode;
    tempnode -> rear = tempnode;
    
    return temp;
}

int getbyindex(d_linkedlist * list, int index){
    if(!list->size){
        list -> current = list -> node;
        return INT_MAX;
    }
    else{
        if(index >= 0){
            list -> current = list -> node -> rear;
            for(int i=0; i < index; i++){
                list -> current = list -> current -> rear;
            }
        }
        else{
            list -> current = list -> node -> front;
            for(int i = -1; i > index; i--){
                list -> current = list -> current -> front;
            }
        }
        return list -> current -> element;
    }
    
}

void inputbyindex(d_linkedlist * list, int index, int element){
    dlnode * temp = (dlnode *)malloc(sizeof(dlnode));
    temp -> element = element;
    getbyindex(list,index);

    temp -> rear = list -> current -> rear;
    temp -> front = list -> current;
    list -> current -> rear -> front = temp;
    list -> current -> rear = temp;

    list -> size++;
}

int popbyindex(d_linkedlist * list, int index){
    if(!list -> size){
        return INT_MAX;
    }
    else{
        getbyindex(list,index);
        int temp = list -> current -> element;
        list -> current -> front -> rear = list -> current -> rear;
        list -> current -> rear -> front = list -> current -> front;
        free(list -> current);
        list -> current = NULL;
        list -> size--;
        return temp;
    }
}

void printlist(d_linkedlist * list){
    list -> current = list -> node;
    for(int i=0; i < list->size; i++){
        list -> current = list -> current -> rear;
        printf("%d ",list -> current -> element);
    }
    printf("\n");
}

void deletelist(d_linkedlist * list){
    dlnode * temp;
    list -> current = list -> node;
    for(int i=0; i < list->size; i++){
        list -> current = list -> current -> rear;
        temp = list -> current;
        free(temp);
    }
    free(list -> node);
    free(list);
}

void listappend(d_linkedlist * list, int element){
    inputbyindex(list,-1,element);
}

void concat(d_linkedlist * list, d_linkedlist * list2){
    list -> size = list -> size + list2 -> size;
    getbyindex(list,-1);
    getbyindex(list2,0);
    list -> current -> rear = list2 -> current;
    list2 -> current -> front = list -> current;
    getbyindex(list2,-1);
    list -> node -> front = list2 -> current;
    list2 -> current -> rear = list -> node;
    list2 -> size = 0;
    deletelist(list2);
}
