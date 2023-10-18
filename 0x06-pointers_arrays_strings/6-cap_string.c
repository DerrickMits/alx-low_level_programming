#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to be capitalized
 *
 * The function capitalizes all words of a string
 *
 * Return: Apointer to the changes string
 */
char *cap_string(char *str)
{
int b = 0;
while (str[b])
{
while (!(str[b] >= 'a' && str[b] <= 'z'))
b++;
if (str[b - 1] == ' '||
str[b - 1] == '\t' ||
str[b - 1] == '\n' ||
str[b - 1] == ',' ||
str[b - 1] == ';' ||
str[b - 1] == '.' ||
str[b - 1] == '!' ||
str[b - 1] == '?' ||
str[b - 1] == '"' ||
str[b - 1] == '(' ||
str[b - 1] == ')' ||
str[b - 1] == '{' ||
str[b - 1] == '}' ||
b == 0)
str[b] -= 32;
b++;
}
return (str);
}
