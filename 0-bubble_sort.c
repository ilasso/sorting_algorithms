#include "sort.h"
/**
 * bubble_sort - implement sort bubble algorithm
 *
 * @array: The array to be ordered
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{

	int temp;
	unsigned long int i;
	int org = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1] && i < (size - 1))
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			org = 1;
			print_array(array, size);
		}
		if (i == (size - 1) && org == 1)
		{
			i = -1; /*because i++ to reset i to 0*/
			org = 0;
		}
		if (i == (size - 1) && org == 0)
			break;
	}
return;
}
