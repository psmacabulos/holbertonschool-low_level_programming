#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Add your function prototypes below this line */
#include <stddef.h>


#endif /* MAIN_H */
