#include "dog.h"
/**
 *init_dog - func
 *@d: struct
 *@name: name
 *@age: age
 *@owner:
 *Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d.name = name;
	d.age = age;
	d.owner = owner;
	return (d);
}
