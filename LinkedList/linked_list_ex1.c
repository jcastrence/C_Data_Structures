#include <stdio.h>
#include "linked_list.h"

int main() {

   LinkedList * my_list = init(my_list);

   printf("Size of list: %d\n", my_list->size);

   int data1 = 99;
   int data2 = 5;
   int data3 = 23;



   add(my_list, data1);
   add(my_list, data2);
   add(my_list, data3);


   printf("Size of list: %d\n", my_list->size);

   print_list(my_list);

   del(my_list, 23);

   print_list(my_list);

   add(my_list, 3);
   add(my_list, 3);
   add(my_list, 5);
   add(my_list, 3);

   print_list(my_list);

   del_all(my_list, 3);

   print_list(my_list);

   return 0;
}
