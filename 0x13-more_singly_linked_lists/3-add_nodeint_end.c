#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *t = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Error: Memory allocation failed\n");
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
while (t->next != NULL)
{
t = t->next;
}
t->next = new;
}
return (new);
}
