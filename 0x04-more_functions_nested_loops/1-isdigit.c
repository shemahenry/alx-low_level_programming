#include "main.h"
/**
 * _isdigit - if is a digit
 *@c: print int
 * Return: Always 0.
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
