#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	if (n == 0)
		return (0);
	else
	{
		va_list ap;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
	}

	return (sum);
}
