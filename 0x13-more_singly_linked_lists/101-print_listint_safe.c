#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (loop)
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *pun, *num;
size_t count = 0;
if (head == NULL)
exit(98);
pun = head;
num = head;
while (num != NULL && num->next != NULL)
{
printf("[%p] %d\n", (void *)pun, pun->n);
count++;
pun = pun->next;
num = num->next->next;
if (pun == num)
{
printf("-> [%p] %d\n", (void *)pun, pun->n);
printf("-> [%p] %d\n", (void *)num, num->n);
printf("Linked list is a loop\n");
exit(98);
}
}
return (count);
}
