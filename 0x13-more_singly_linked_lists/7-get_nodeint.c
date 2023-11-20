#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
listint_t *current = head;
while (current != NULL)
{
if (j == index)
return (current);
current = current->next;
j++;
}
return (NULL);
}
