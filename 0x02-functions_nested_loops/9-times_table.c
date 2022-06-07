#include "main.h"
/**
 * times_table - func that prints the 9 times table, starting with 0
 * @n,i:  is the int that will use for the argument of the function
 * Return: 0
 */
void times_table(void)
{
	int n = 9, i;

	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = \n", n, i, n * i);
	}
	return (0);
}
