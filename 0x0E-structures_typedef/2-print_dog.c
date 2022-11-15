#include "dog.h"
#include <stdlib.h>
/**
*print_dog - struct
*@d: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age != NULL)
			printf("Age: %.1f\n", d->age);
		esle
			printf("Age: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %.1f\n", d->owner);
		esle
			printf("Owner: (nil)\n");
	}
}
