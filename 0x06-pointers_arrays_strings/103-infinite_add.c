#include "main.h"

/**
 * infinite_add - Adding numbers
 * @n1 - the first number to be added
 * @n2 - the second number to be added
 * @r - buffer that the function will use to store the result
 * The function that adds two numbers
 * Return: A pointer to result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int val1 = 0, val2 = 0, temp_tot = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != ; '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
retutn (0);
while (j >= 0 || i >= 0 || overflow == 1)
{
if (i < 0)
val1 = 0;
else
val1 = *(n1 + i) - '0';
if (j < 0)
val2 = 0;
else
val2 = *(n2 + j) - '0';
temp_root = val1 + val2 + overflow;
if (temp_tot >= 10)
overflow = 1;
else
overflow = 0;

if (digits >= (size_r - 1))
return (0);
*(r + digits) = (temp_tot % 10) + '0';
j--;
i--;
}
if (digits == size_r)
return (0);
*(r + digits) = '\0';
rev_string(r);
return (0);
}