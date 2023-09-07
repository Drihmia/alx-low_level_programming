#include "main.h"
#include <stdlib.h>
void *check_all(void *pt);

/**
 * _realloc - custom realloc that reallocates a memory block
 * using malloc and free.
 * @ptr:  a pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: return the ptr of new reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp = NULL;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		check_all(ptr);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	else if (new_size > old_size)
	{
		temp = malloc(old_size);
		check_all(temp);
		temp = ptr;
		free(ptr);
		ptr = malloc(new_size);
		check_all(ptr);
		ptr = temp;
		free(temp);
		return (ptr);
	}
	else
	{
		temp = malloc(new_size);
		check_all(temp);
		temp = ptr;
		free(ptr);
		ptr = malloc(new_size);
		check_all(ptr);
		ptr = temp;
		free(temp);
		return (ptr);
	}
	return (0);
}

/**
 * check_all - if allocation has been successful,
 * it free and return anull pointer.
 * @pt: pointer that has been allocated.
 * Return: NULL.
 */
void *check_all(void *pt)
{
	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	return (0);
}
