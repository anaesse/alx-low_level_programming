#include "main.h"
/**
 * print_to_98  - function that prints all natural numbers from n to 98, followed by a new line.
 * Return: 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
