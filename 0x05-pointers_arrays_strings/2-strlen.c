#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: The legnth of thr string
 * Return: the lenght of @str
 */
int _strlen(char *s)
{
size_t length = 0;
while (*s++)
length++;
return (length);
}
