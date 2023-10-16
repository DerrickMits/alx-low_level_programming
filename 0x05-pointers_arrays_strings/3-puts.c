#include "main.h"

/**
 * _puts - prints a string
 * @str: The string to print
 *
 * This function prints the characters in the given string followed by a newline.
 *
 * Return: Void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
