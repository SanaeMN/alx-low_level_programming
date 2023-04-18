#include "dog.h"
#include <stdio.h>

/**
* print_dog - function that prints a struct dog
* @d: the dog to print
*
* Return: Void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(ni1)");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
