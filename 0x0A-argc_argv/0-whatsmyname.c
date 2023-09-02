#include "main.h"
#include <stdio.h>
/**
 * main - parameter list
 * @argc: input value
 * @argv: input value
 *
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", *argv[0]);

	return (0);
}
