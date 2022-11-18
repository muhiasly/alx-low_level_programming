#include "3-calc.h"

/**
 * op_add - calculate sum of two int
 * @a: first int
 * @b: second int
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference between two int
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
