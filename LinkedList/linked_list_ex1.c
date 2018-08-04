#include <stdio.h>
#include "linked_list.h"

int main() {

   LinkedList * my_list;
   int data = 5;
   add(my_list, &data);

   printf("my_list[0]: %d\n", *((int*)(my_list->head->data)));

   return 0;
}
