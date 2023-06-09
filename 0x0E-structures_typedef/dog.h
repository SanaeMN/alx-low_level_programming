#ifndef DOG_H
#define DOG_H

/**
* struct dog -  dog struct
* @name: the name of the dog
* @age: the age of the dog
* @owner: the name of the owner
* Description: the attributes of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
