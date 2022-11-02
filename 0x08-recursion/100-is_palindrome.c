#include "main.h"

/**
 * palindromeChecker - checks the string
 * @str: the string to be checked
 * @len: length of string
 * @i: the incrementor
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length of
 *
 * Return: an integer that displas the lenghth of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if it is a palindrome and 2 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
