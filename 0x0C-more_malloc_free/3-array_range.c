#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - print a array
 * @min: min value
 * @max: max value
 * Return: return int
 */
int *array_range(int min, int max)
{
	int *add;
	int arr, i;

	if (min > max)
		return (NULL);
	arr = max - min;
	add = malloc((arr + 1) * sizeof(int));
	if (add == NULL)
		return (NULL);

	for (i = 0; i <= arr, i++)
		add[i] = min++;
	return (add);
}
