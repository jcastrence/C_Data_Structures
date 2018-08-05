#include <stdlib.h>

#if !defined(LINKED_LIST_H)
#define LINKED_LIST_H

typedef struct node {
   int data;
   struct node * next;
} Node;

typedef struct linkedlist {
   Node * head;
   int size;
} LinkedList;

/*
   Constructor
 */
LinkedList * init(LinkedList * list) {
   list->head = NULL;
   list->size = 0;
   return list;
}

/*
   Creates new node using new_data parameter then adds new node to end of linked
   list
   Returns
   1 if successful
   0 if unsuccessful
*/
int add(LinkedList * list, int new_data) {
   Node * curr, * new_node;

   if (!list) {
      return 0;
   }

   new_node = malloc(sizeof(Node));
   new_node->data = new_data;
   new_node->next = NULL;

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
   list->size++;

   return 1;
}


/*
   Removes the first instance of data
   Returns
   0 if list is NULL
   1 if data is found and removed
   2 if data is not found
*/
int del(LinkedList * list, int data) {

   Node * curr, * prev;
   /* Check if list is NULL */
   if (!list) {
      return 0;
   }
   /* Assign curr to beginning of list, prev to NULL */
   curr = list->head;
   prev = NULL;
   /* Traverse list while curr is not NULL */
   while (curr) {
      /* If match is found */
      if (curr->data == data) {
         /* Match found at head */
         if (!prev) {
            list->head = curr->next;
            free(curr);
         }
         /* Match found in middle of list */
         else {
            prev->next = curr->next;
            free(curr);
         }
         list->size--;
         return 1;
      }
      prev = curr;
      curr = curr->next;
   }

   return 2;
}


/*
   Deletes all instances of data
   Returns
   0 if list is NULL
   1 if data was found
   2 if data was not found
*/
int del_all(LinkedList * list, int data) {

   Node * curr, * prev;
   int found = 2;

   if (!list) {
      return 0;
   }

   curr = list->head;
   prev = NULL;

   while (curr) {
      if (curr->data == data) {
         found = 1;

         while (curr->next && curr->data == data) {
            list->size--;
            curr = curr->next;
         }

         if (!prev) {
            list->head = curr->next;
         }
         else {
            prev->next = curr->next;
         }


      }
      if (curr) {
         prev = curr;
         curr = curr->next;
      }


   }

   return found;
}

/*
   Prints the list
*/
void print_list(LinkedList * list) {

   Node * curr;

   if (!list) {
      printf("List is empty\n");
      return;
   }

   curr = list->head;
   printf("head -> ");
   while (curr) {
      printf("%d -> ", curr->data);
      curr = curr->next;
   }
   printf("NULL\n");

}

#endif /* LINKED_LIST_H */
