#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: Size of the array to be initialized.
 * @c: Char to intialize the array with.
 *
 *Return: If size == 0 or the function fails - NULL.
 *Pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] =  c;
	}

	return (array);
}
