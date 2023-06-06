C - More singly linked lists
This repository contains a collection of functions designed to manipulate a
singly linked list of integers, specifically the listint_t type. These
functions are implemented in the C programming language and adhere to certain
requirements and constraints specified in the project description.

Files

The repository includes the following files:

lists.h: This header file contains the function prototypes and the structure
definition for the listint_t linked list.
0-print_listint.c: This file provides the implementation of a function that
prints all the elements of a listint_t list.
1-listint_len.c: This file contains the implementation of a function that
returns the number of elements in a listint_t list.
2-add_nodeint.c: Here, you will find the function implementation that adds a
new node at the beginning of a listint_t list.
3-add_nodeint_end.c: This file includes the function implementation for adding
a new node at the end of a listint_t list.
4-free_listint.c: Here, you can find the function implementation responsible
for freeing a listint_t list.
5-free_listint2.c: This file includes the function implementation that frees
a listint_t list and sets the head pointer to NULL.
6-pop_listint.c: Here, you will find the function implementation that deletes
the head node of a listint_t list and returns its data.
7-get_nodeint_at_index.c: This file contains the function implementation
responsible for returning the nth node of a listint_t list.
8-sum_listint.c: Here, you can find the function implementation that
calculates and returns the sum of all the data in a listint_t list.
9-insert_nodeint_at_index.c: This file includes the function implementation
for inserting a new node at a given position in a listint_t list.

Usage

To use these functions, you need to include the lists.h header file in your
C program. This file provides the necessary function prototypes and the
structure definition for the listint_t linked list.
Compile this program with the appropriate source file like gcc -Wall -Werror
-Wextra -pedantic main.c 0-print_listint.c

By utilizing the functions provided in this repository, you can easily
manipulate and work with singly linked lists of integers in your C programs.
