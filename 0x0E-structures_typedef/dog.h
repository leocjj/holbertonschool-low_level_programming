#ifndef DOC_H
#define DOC_H

struct dog {\
	char *name;\
	float age;\
	char *owner;\
};


int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
