#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t, *prev;
unsigned int i;
if (*head == NULL)
return (-1);
t = *head;
prev = NULL;
if (index == 0)
{
*head = t->next;
free(t);
return (1);
}
for (i = 0; i < index && t != NULL; i++)
{
prev = t;
t = t->next;
}
if (t == NULL)
return (-1);
prev->next = t->next;
free(t);
return (1);
}
