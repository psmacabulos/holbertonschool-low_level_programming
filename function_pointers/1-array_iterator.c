#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: pointer to an array
 * @size: size of the array
 * @action: function pointer that will act on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		for (size_t i = 0; i < size; i++)
			action(array[i]);
	}
}
