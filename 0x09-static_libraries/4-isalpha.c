#include "main.h"
/**
 * _isalpha - a function that checks an alphabetic character
 * @c: check character
 * Return: 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
