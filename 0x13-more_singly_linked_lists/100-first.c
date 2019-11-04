#include <stdio.h>
#include "lists.h"

/**
 * StartupFunction - Apply constructor attribute. Is executed before main()
 *
 * Return: void
 */
void StartupFunction(void) __attribute__ ((constructor));

/**
 * StartupFunction - Apply the destructor attribute. Is executed after main()
 *
 * Return: void
 */
void CleanupFunction(void) __attribute__ ((destructor));

/**
 * StartupFunction - implementation of StartupFunction
 *
 * Return: void
 */
void StartupFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * CleanupFunction - implementation of CleanupFunctiom
 *
 * Return: void
 */
void CleanupFunction(void)
{
	/*printf ("cleanup code after main()\n");*/
}
