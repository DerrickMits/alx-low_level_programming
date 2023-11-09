#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all parameters
 * @n: The number of parameters
 * @...: A variable number of parameters
 * Return: if n == 0 - 0
 * Otherwise: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
