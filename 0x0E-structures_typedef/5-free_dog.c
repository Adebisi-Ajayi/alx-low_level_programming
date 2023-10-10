#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free dog
 * @d: dog data
 *
 * Description: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
