#include "main.h"
#include <stdlib.h>
/**
 * array_range - print a array
 * @min: min value
 * @max: max value
 * Return: return int
 */
int *array_range(int min, int max)
{
	int arr, i;
	int *add;

	if (min > max)
		return (NULL);
	arr = max - min;
	add = malloc((arr + 1) * sizeof(int));
	if (add == NULL)
		return (NULL);

	for (int i = 0; i <= max, i++)
		add[i] = min++;
	return (add);
}
