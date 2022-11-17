#include <stdlib.h>
#include "function_pointers"

/**
 * array_iterator - executes a fuction given as a parameter
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
