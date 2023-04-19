#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two ints
 * @a: The first int.
 * @b: The second int.
 *
 * Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two ints
 * @a: The first int.
 * @b: The second int.
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the mult of two ints.
 * @a: The first int
 * @b: The second int
 *
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two ints.
 * @a: The first int
 * @b: The second int
 *
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two ints
 * @a: The first int
 * @b: The second int
 *
 * Return: The remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
