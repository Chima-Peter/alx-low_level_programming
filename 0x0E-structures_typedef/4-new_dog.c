#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog- Creates a new structure object
 *
 * @name: Name member
 * @age: Age member
 * @owner: Owner member
 * Return: Returns a structure variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newarr;
	int a = sizeof((*newarr).name) + 4 + sizeof((*newarr).owner);

	newarr = malloc(a);
	if (newarr == NULL)
	{
		return (NULL);
	}
	else
	{
		(*newarr).name = name;
		(*newarr).age = age;
		(*newarr).owner = owner;
	}
	return (newarr);
	free(newarr);
}
