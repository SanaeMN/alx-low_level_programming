#include "dog.h"

/**
* init_dog - initialize a variable
* @d: the dof of the init
* @name: the name of the dog
* @age: the age of the dog
* @owner: the of the owner
* Return: Void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
