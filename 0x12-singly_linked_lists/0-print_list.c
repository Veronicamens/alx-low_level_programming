#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

count++;
h = h->next;
}

return (count);
}

int main(void)
{
list_t *head = malloc(sizeof(list_t));
head->str = "Hello";
head->len = 5;
head->next = malloc(sizeof(list_t));
head->next->str = "World";
head->next->len = 5;
head->next->next = NULL;

size_t count;

count = print_list(head);
printf("Number of nodes: %lu\n", (unsigned long)count);

free(head->next);
free(head);

return (0);
}
