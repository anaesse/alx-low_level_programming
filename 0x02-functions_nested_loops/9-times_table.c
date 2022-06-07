#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * @n: is the int for the parameter of my function
 * @i: is the int for the looping of my function
 * Return: 0
 */
void times_table(void)
{
	int n = 9;
	int i

	for (i = 0; i <= 10; ++i)
	{
		_putchar('%d', n, i, n * i);
		_putchar('\n');
	}
}
