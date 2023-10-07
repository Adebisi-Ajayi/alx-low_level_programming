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
	if (min > max)
	{
		return (NULL);
	}
	int *arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (int - = min; i <= max, i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
