#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  * print_strings - print out strings
 *   * @seperator: character used to seperate integer
 *    * @n: no of integer in array
 *     * @...: infinite number of variables
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
