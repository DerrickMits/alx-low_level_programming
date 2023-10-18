#include "main.h"

/**
 * string_toupper - Changes the lowercases in a string
 * @str: The string to be changes
 *
 * The function that changes all lowercase letters of a string to uppercase
 *
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
int b = 0;
while (str[b])
{
if (str[b] >= 'a' && str[b] <= 'z')
str[b] -= 32;
b++;
}
return (str);
}
