#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct dlnode{
    int element;
    struct dlnode * front, * rear;
}dlnode;

typedef struct d_linkedlist{
    int size;
    dlnode * node, * current;
}d_linkedlist;


d_linkedlist * mk_list(void);

int getbyindex(d_linkedlist * list, int index);

void inputbyindex(d_linkedlist * list, int index, int element);

int popbyindex(d_linkedlist * list, int index);

void printlist(d_linkedlist * list);

void deletelist(d_linkedlist * list);

void listappend(d_linkedlist * list, int element);

void concat(d_linkedlist * list, d_linkedlist * list2);
