#include<stdio.h>
#include<time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	$rand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{ printf("%d is positive\n", n)};

	else if (n < 0)
	{ printf("%d is negative\n", n)};

	else
	{ printf("%d id zero\n", n)};

	return (0);
}
