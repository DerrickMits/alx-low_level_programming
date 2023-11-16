#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct lists_s - The singly linked list
 * @str - Malloc ed string
 * @len: The string length
 * @next: Directs to the next node
 *
 * Return: Singly linked node structure
 */

typedef struct list_s
{
char *str;
unsigned len;
struct list_s *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
