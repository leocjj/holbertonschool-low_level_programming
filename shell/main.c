#include "shs.h"

/**
 * main - detects if the call is interactive or not,
 * then calls a function accordingly.
 * @argc: number of arguments received.
 * @argv: arguments received.
 *
 * Return: 20 if too many arguments, 0 successfully ended.
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		if (isatty(fileno(stdin)))
			_itty(*argv);
		else
			_ntty(*argv);
	} else
	{
		printf("Too many arguments");
		return (20);
	}
	return (0);
}

/**
 * ACTIVIDADES HECHAR
 * COMENATARIOS CORREGIDOS
 * TABULACION CAMBIADA A 4 ESPACIOS PARA NO SUPERAR LOS 80 CARACTERES POR LINEA
 *
 * CONDICIONES DE ARCHIVO ACTUALIZADAS: SI EXISTE EL ARCHIVO Y SI SE PUEDE EJECUTAR.
 * file_found = stat(command_line, &st);
 * file_access = access(command_line, F_OK | X_OK);
 *
 * EN ARCHIVO _read.c, por qué aparece EXIT SUCCESS en la siguiente instrucción??
 * if (len_of_read == -1)
 *
 *
 *
 * PENDINGS
 *
 * DEBERÍAMOS COLOCAR char *command_exit = "exit"; QUE ESTÁ EN _READ.C, EN HEADER shs.h
 *
 * Task Simple shell 0.1 mandatory
 * Write a UNIX command line interpreter.
 * 	*) Handle errors.
 * 	*) You have to handle the “end of file” condition (Ctrl+D)
 *
 * Task Simple shell 0.2 mandatory		Simple shell 0.1 +
 * 	*) Handle command lines with arguments (creo que es usando strtok y pasando los argumentos a execve)
 *
 * Task Simple shell 0.3 mandatory		Simple shell 0.2 +
 * 	*) Handle the PATH
 *
 * Task Simple shell 0.4 mandatory		Simple shell 0.3 +
 * 	*) Implement the exit built-in, that exits the shell
 * 	*) Usage: exit
 * 	*) You don’t have to handle any argument to the built-in exit
 *
 * Task Simple shell 1.0 mandatory		Simple shell 0.4 +
 * 	*) Implement the env built-in, that prints the current environment
 *
 * Task Betty would be proud mandatory
 * 	*) Write a beautiful code that passes the Betty checks
 *
 * Task README, man, AUTHORS mandatory
 * 	*) Write a README
 * 	*) Write a man for your shell.
 * 	*) You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker
 *
 *
 * Información importante de los comandos resumida en este archivo:
 * https://github.com/leocjj/0123/blob/master/0123C_files.txt
 *
 *
 *                perror("execve");   //execve() returns only on error
 *                exit(EXIT_FAILURE);
 *
 */
