#include "main.h"

/*
 * more_numbers -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
