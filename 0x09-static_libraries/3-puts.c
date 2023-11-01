#include "main.h"

/**
 * _puts - program that prints a strig
 * @s: the string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
			_putchar('\n');
}
