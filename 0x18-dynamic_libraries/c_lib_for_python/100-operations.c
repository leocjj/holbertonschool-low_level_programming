/**
 * add - Calculate absolute value of an integer.
 * @a: first integer to evaluate.
 * @b: second integer to evaluate.
 *
 * Return: add of two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Calculate absolute value of an integer.
 * @a: first integer to evaluate.
 * @b: second integer to evaluate.
 *
 * Return: substraction of two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Calculate absolute value of an integer.
 * @a: first integer to evaluate.
 * @b: second integer to evaluate.
 *
 * Return: multiplication of two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Calculate absolute value of an integer.
 * @a: first integer to evaluate.
 * @b: second integer to evaluate.
 *
 * Return: divition of two numbers
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
 * mod - Calculate absolute value of an integer.
 * @a: first integer to evaluate.
 * @b: second integer to evaluate.
 *
 * Return: modulus of a with b
 */
int mod(int a, int b)
{
	return (a % b);
}