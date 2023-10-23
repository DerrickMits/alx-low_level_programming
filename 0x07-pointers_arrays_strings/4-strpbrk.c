#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - The entry point
 * @s: Input
 * @accept: input
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
int a, n;
for (a = 0; s[a] != '\0'; a++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[a] == accept[n])
return (s + a);
}
}
return (NULL);
}
