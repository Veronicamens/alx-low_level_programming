#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_linked_list - prints all the elements of a linked list
*@head: pointer to the head of the list
*Return: the number of nodes in the list
*/
size_t print_linked_list(const list_t *head)
{
int node_count = 0;

while (head != NULL)
{
if (head->str == NULL)
{
printf("[0] (NULL)\n");
head = head->next;
node_count++;
}
printf("[%d] %s\n", head->len, head->str);
head = head->next;
node_count++;
}
return (node_count);
}
