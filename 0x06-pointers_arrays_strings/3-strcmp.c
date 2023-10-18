#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The pointer to the first string to be compared
 * @s2: The pointer to the second string to be compared
 *
 * This function compares two strings
 *
 * Return: If s1 < s2, the negative difference 
 * If s1 == s2, 0
 * If s1 > s, the postive difference
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
