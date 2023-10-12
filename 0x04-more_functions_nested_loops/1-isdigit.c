#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to print
 * Return: 1 for a character that is a digit or 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
