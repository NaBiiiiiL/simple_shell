#include "shell.h"

/**
 * bfree - frees pointer and NULLs the addres
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0. (Zero)
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
