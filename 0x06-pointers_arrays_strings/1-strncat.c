#include "main.h"

/**
 * _strncat - concatenates two strings at most
 * @dest: The string to be appended
 * @src: The string to be appended to dest
 * @n: The number of bytes to be appneded to dest
 *
 * The function that concatenates two strings
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, d = 0;
while (dest[index++])
d++;
for (index = 0; src[index] && index < n; index++)
dest[d++] = src[index];
return (dest);
}
