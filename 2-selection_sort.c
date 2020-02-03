#include "sort.h"
/**
 * selection_sort - implement sort selection algorithm
 *
 * @array: The array to be ordered
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{

	int temp;
	unsigned long int i;
	unsigned long int j;
	int smaller;

	if (size < 2)
		return;

	smaller = 0;
	for (i = 0; i <= (size - 1); i++)
	{
		smaller = i;
		for (j = i; j <= (size - 1); j++)
		{
			if (array[i] > array[j] && array[j] < array[smaller])
			{
				smaller = j;
			}
		}
		if (array[smaller] != array[i])
		{
			temp = array[smaller];
			array[smaller] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
return;
}
