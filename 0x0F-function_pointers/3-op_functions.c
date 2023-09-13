#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers and returns
 * @a: Initial number
 * @b: Second number
 *
 * Return:total a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts 2 numbers
 * @a: Initial number
 * @b: Second number
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two numbers.
 * @a: Initial number
 * @b: Second number
 *
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two numbers.
 * @a: Initial number
 * @b: Second number
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Calculates division remainder
 * @a: Initial number
 * @b: Second number
 *
 * Return: result of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
