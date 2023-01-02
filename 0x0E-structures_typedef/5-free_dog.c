#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- Creates a function that frees the structure
 *
 * @d: The structure to be freed
 */
void free_dog(dog_t *d)
{
	free(d);
}
