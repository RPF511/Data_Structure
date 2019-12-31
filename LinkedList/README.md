# Linked List

* C Language
* dual linked + curcular

## struct
* dlnode  
  node that contains element
  * element : element
  * front : front node pointer
  * rear : rear node pointer
  
* d_linkedlist
  linkedlist
  * size : number of node
  * node : empty node linked to real nodes
  * current : pointer of the node currently using
  
## function
* int getbyindex\(d_linkedlist * list, int index\)
  find node by index
  save pointer of the node in d_linkedlist -> current
  returns element of the node

* void inputbyindex\(d_linkedlist * list, int index, int element\)
  input node of which element is given element, right after given index location

* int popbyindex\(d_linkedlist * list, int index\)
  pop node by index
  returns element of node

* void printlist\(d_linkedlist * list\)
  print list

* void deletelist\(d_linkedlist * list\)
  delete list

* void listappend\(d_linkedlist * list, int element\)
  append

* void concat\(d_linkedlist * list, d_linkedlist * list2\)
  concatenate two list
  list 2 will be deleted
