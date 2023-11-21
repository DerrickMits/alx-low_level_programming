#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
size_t a = 0;
int i;
listint_t *t;
if (!h || !*h)
return (0);
while (*h)
{
i = *h - (*h)->next;
if (i > 0)
{
t = (*h)->next;
free(*h);
*h = t;
a++;
}
else
{
free(*h);
*h = NULL;
a++;
break;
}
}
*h = NULL;
return (a);
}
