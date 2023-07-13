#include "search_algos.h"

int _binary_search(int *array, int low, int high, int value);

/**
 * _binary_search - searches for a value in a sorted array
 *	binary search
 *
 * @array: pointer to the first element of the array to search.
 * @low: lower bound of the search range.
 * @high: upper bound of the search range.
 * @value: the value to search for.
 *
 * Return: the index of the value;
 *	or -1 indicating the value is not present
 */
int _binary_search(int *array, int low, int high, int value)
{
	int i, mid;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 *	exponential search algorithm:
 *
 * @array: pointer to the first element of the array to search
 * @size: no. of elements in the array
 * @value: the value to search for.
 *
 * Return: the index of the value
 *	or -1 indicating the value is not present.
 *
 * Description: performs exponential search on a sorted array.
 *	prints the value checked at each step
 *	and the new array (or subarray) being searched.
 *
 *	uses powers of 2 as exponential ranges to search the array.
 *	if appropriate range is found, performs a binary search init
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n",
				bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (_binary_search(array, low, high, value));
}
