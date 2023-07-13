#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 *	Jump search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: no. of elements in the array
 * @value: value to search for
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i, jump_step;

	if (array == NULL || size == 0)
		return (-1);

	for (i = jump_step = 0; jump_step < size && array[jump_step] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n",
				jump_step, array[jump_step]);
		i = jump_step;
		jump_step += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump_step);

	jump_step = jump_step < size - 1 ? jump_step : size - 1;
	for (; i < jump_step && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
