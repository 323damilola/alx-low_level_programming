#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *	linear search algorithm
 *
 * @array: points to the first element of the array
 * @size: (number of) elements in the array
 * @value: value to be searched for in search domain
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
