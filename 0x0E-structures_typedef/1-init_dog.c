#include "dog.h"

/**
 * init_dog- The function that creates a variable.
 *
 * @d: Name of the structure variable.
 *
 * @name: Name member
 * @age: Age member
 * @owner: Owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
