#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'The last digit'
 *
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last = n % 10;
		if (n > 5)
			printf("Last digit of %d is %d  greater than 5\n", n, last);
		if (n < 6 && n != 0)
			printf("Last digit of %d is %d less than 6 and not 0\n", n, last);
		if (n == 0)
			printf("Last digit of %d is 0\n", n);
}
