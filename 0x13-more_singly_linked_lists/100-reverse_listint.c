#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre = NULL, *current = *head, *next_node;
while (current != NULL)
{
next_node = current->next;
current->next = pre;
pre = current;
current = next_node;
}
*head = pre;
return (*head);
}
