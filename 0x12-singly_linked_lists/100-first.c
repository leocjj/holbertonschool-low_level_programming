#include <stdio.h>
#include <lists.h>

/**
 * StartupFunction - Apply the constructor attribute to StartupFunction() so that it is executed before main()
 *
 * Return: void
 */
void StartupFunction(void) __attribute__ ((constructor));

/**
 * StartupFunction - Apply the destructor attribute to CleanupFunction() so that it is executed after main()
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
    printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * CleanupFunctiom - implementation of CleanupFunctiom
 *
 * Return: void
 */
void CleanupFunction(void)
{
    /*printf ("cleanup code after main()\n");*/
}
