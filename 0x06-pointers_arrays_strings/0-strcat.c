#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: The ddestination of the sring
 * @src: The source string
 *
 * The function that concatenates two strings
 *
 * Return: A pointer to the string destination
 */
char *_strcat(char *dest, char *src)
{
int d = 0, i;
while (dest[d])
{
d++;
}
for (i = 0; src[i] != 0; i++)
{
dest[d] = src[i];
d++;
}
dest[d] = '\0';
return (dest);
}
