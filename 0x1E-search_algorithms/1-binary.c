#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *	binary search algorithm using integers
 *
 * @array: pointer to the first element of the array to the search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i, mid;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
