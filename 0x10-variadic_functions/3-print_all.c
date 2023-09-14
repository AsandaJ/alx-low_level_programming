#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Output anything
 * @format: Argument data types
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *str, *sep = "";

	va_list enumerate;

	va_start(enumerate, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", sep, va_arg(enumerate, int));
					break;
				case 'k':
					printf("%s%d", sep, va_arg(enumerate, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(enumerate, double));
					break;
				case 's':
					str = va_arg(enumerate, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					k++;
					continue;
			}
			sep = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(enumerate);
}
