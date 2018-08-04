#if !defined(LINKED_LIST_H)
#define LINKED_LIST_H

typedef struct node {
   void * data;
   struct node * next;
} Node;

typedef struct linkedlist {
   Node * head;
   int size;
} LinkedList;





#endif /* LINKED_LIST_H */
