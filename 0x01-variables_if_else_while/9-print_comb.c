#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: PPP
 *
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int digi;

	for (digi = 0; digi <= 9; digi++)
	{
	putchar((digi % 10) + '0');

		if (digi != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
