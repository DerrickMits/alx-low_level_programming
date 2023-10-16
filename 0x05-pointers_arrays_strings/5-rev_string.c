#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses the string
 * @s: Modified string
 *
 * This function reverses a string
 *
 * Return: void
 */
void rev_string(char *s)
{
int len = 0, index = 0;
char tmp;
while (s[index++])
for (index = len - 1; index >= len /2; index--)
{
tmp = s[index];
s[index] = s[len - index -1];
s[len - index -1] = tmp;
}
}
