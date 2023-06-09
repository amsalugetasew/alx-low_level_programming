#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Structure declaration name dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: declartaion of new dog structure with three members
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
void free_dog(dog_t *d);
char *copy_string(char *d, char *s);
int lenth_of_string(char *s);
#endif
