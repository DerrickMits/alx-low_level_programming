#include  <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *f = head;
listint_t *s = head;
if (!head)
return (NULL);
while (s && f && f->next)
{
s = s->next;
f = f->next->next;
if (f == s)
{
s = head;
while (head != f)
{
s = s->next;
f = f->next;
}
return (f);
}
}
return (NULL);
}
