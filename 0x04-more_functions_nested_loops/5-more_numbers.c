#include "main.h"

/**
 * more_numbers - prints number to 14
 *
 * Return: returns notjhing
 */

void more_numbers(void)
{
	int No1, No2;

	for (No1 = 0; No1 < 10; No1++)
	{
		for (No2 = 0; No2 <= 14; No2++)
		{
			if (No2 > 9)
			{
				_putchar((No2 / 10) + '0');
						}
						_putchar((No2 / 10) + '0');
						}


_putchar(10);
}
}
