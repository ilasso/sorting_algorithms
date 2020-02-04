#include "sort.h"
/**
 * quick_sort - implement quick sort algorithm
 *
 * @array: The array to be ordered
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	QS(array, 0, size - 1, size);
return;
}

/**
 * LomutoPart - implementation Lomuto partition
 * @array: The array to be ordered
 * @low : firts position of array
 * @up  : last position of array
 * @size: Number of elements in @array
 * Return: partition index
 */

int LomutoPart(int *array, int low, int up, size_t size)
{

	int pivot;
	int temp;
	int i;
	int j;

	pivot = array[up];
	i = low;
	j = low - 1;

	while (i <= up)
	{
		if (array[i] <= pivot)
		{
			j++;
			if (j != i)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
	return (j);
}
/**
 * QS - Recursive manage to divide sort
 * @array: The array to be ordered
 * @low : firts position of array
 * @up  : last position of array
 * @size: Number of elements in @array
 */

void QS(int *array, int low, int up, size_t size)
{
	int i;

	if (low > up)
		return;

	i = LomutoPart(array, low, up, size);
	QS(array, low, i - 1, size);
	QS(array, i + 1, up, size);
return;
}
