#Makefile for LinkedList

.PHONY: clean

linked_list_ex1: linked_list_ex1.o
	gcc -o ex1 linked_list_ex1.o

linked_list_ex1.o: linked_list_ex1.c linked_list.h
	gcc -c linked_list_ex1.c

clean:
	-rm *.o a.out