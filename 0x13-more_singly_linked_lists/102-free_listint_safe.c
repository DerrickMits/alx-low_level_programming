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
size_t size = 0;
listint_t *s, *f, *temp;
if (h == NULL || *h == NULL)
return (0);
s = *h;
f = *h;
while (f && f->next)
{
s = s->next;
f = f->next->next;
if (s == f)
{
s = *h;
while (s != f)
{
temp = f;
f = f->next;
free(temp);
size++;
}
while (f->next != s)
{
temp = f->next;
f->next = temp->next;
free(temp);
size++;
}
break;
}
}
while (*h)
{
temp = *h;
*h = temp->next;
free(temp);
size++;
}
return (size);
}
