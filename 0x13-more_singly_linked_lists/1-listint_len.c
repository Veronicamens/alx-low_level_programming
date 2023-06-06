#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked listint_t list.
* @head: Pointer to the head of the list.
*
* Return: Number of elements in the list.
*/
size_t listint_len(const listint_t *head)
{
register size_t count = 0;

while (head)
{
head = head->next;
count++;
}
return (count);
}
