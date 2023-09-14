#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
	int cin1, cin2;

	if (size > 0)
	{
		for (cin1 = 1; cin1 <= size; cin1++)
		{
			for ((cin2 = size - cin1); cin2 > 0; cin2--)
				_putchar(' ');
			for (cin2 = 0; cin2 < cin1; cin2++)
				_putchar('#');

			if (cin1 == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
