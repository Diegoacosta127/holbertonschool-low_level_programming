#ifndef MAIN_H
#define MAIN_H
/**
  * struct dog - name, age and owner of the dog
  * @name: name of the dog
  * @age: age of the puppy
  * @owner: name of it owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
