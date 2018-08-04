#include <stdlib.h>

#if !defined(LINKED_LIST_H)
#define LINKED_LIST_H

typedef struct node {
   void * data;
   struct node * next;
} Node;

typedef struct linkedlist {
   Node * head;
   int size;
   int (*add)(void *);
   int (*remove)();
} LinkedList;

/*
   Creates new node using new_data parameter then adds new node to end of linked
   list
   Returns
   1 if successful
   0 if unsuccessful
*/
int add(LinkedList * list, void * new_data) {
   Node * curr, * new_node;

   if (!list || !new_data) {
      return 0;
   }

   new_node = malloc(sizeof(Node));
   new_node->data = new_data;

   if (!list->head) {
      list->head = new_node;
   }
   else {
      curr = list->head;
      while (curr->next) {
         curr = curr->next;
      }
      curr->next = new_node;
   }

   return 1;
}

int remove() {

}


#endif /* LINKED_LIST_H */
