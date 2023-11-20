#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp;
unsigned int i;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Error: Memory allocation failed\n");
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
temp = *head;
i = 0;
while (i < idx - 1 && temp != NULL)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{
free(new);
return (NULL);
}
new->next = temp->next;
temp->next = new;
return (new);
}
