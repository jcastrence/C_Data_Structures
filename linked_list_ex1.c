#include <stdio.h>
#include "linked_list.h"

int main() {

   int x = 5;
   Node first_node = {&x, NULL};
   LinkedList list = {&first_node};

   printf("Size of list: %d\n", list.size);

   return 0;
}
