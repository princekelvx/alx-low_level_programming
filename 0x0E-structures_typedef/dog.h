#ifndef _DOG_
#define _DOG_

/**
 * struct dog - structure for a basic dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
typdef struct dog dog_t;
#endif
