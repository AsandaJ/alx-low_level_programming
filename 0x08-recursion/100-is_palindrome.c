#include "main.h"

int check_palindrome(char *s, int start, int end);
int _string_length(char *s);

/**
 * is_palindrome - string palindrome checker
 * string to reverse : @s
 *
 * Return: 1 for palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _string_length(s)-1));
}

/**
 * _strlen_recursion - length string calculations
 * string to calculate for : @s
 *
 * Return: length of the string
 */
int _string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _string_length(s + 1));
}

/**
 * check_pal - Recursive characterpalindrome check.
 * String to check : @s
 * Iterator : @start
 * length of the string : @end
 *
 * Return: 1 if palindrome otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}
