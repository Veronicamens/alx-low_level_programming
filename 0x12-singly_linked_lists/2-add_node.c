#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*get_string_length - calculates the length of a string.
*@str: string.
*Return: length of the string.
*/

int get_string_length(const char *str)
{
int length = 0;

while (str[length] != '\0')
length++;

return (length);
}

/**
*add_node_to_list - adds a new node at the beginning of a list.
*@head: pointer to the first element of the list.
*@str: string to be duplicated.
*Return: address of the new element or NULL if it fails.
*/

list_t *add_node_to_list(list_t **head, const char *str)
{
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->next = *head;
new_node->str = strdup(str);
new_node->len = get_string_length(str);

*head = new_node;

return (*head);
}
