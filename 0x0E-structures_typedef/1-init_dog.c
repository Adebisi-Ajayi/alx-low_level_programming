#include "dog.h"
#include <stdio.h>
/**
 * init_dog - information about dog
 * @d: name of dog
 * @age: dog age
 * @name: name of dogs
 * @owner: person who own the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
