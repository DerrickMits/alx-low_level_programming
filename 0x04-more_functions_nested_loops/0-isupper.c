#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character
 * Return:: 1 for uppercase or 0 for otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
