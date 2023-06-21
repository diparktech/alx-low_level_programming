#include <stdio.h>

int _putchar(char c); // Declaration of _putchar function

/**
 * main - Fibonacci <3
 *
 * Purpose - generate Fibonacci sequence up to a certain limit
 *
 * Return: (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	_putchar('0' + bef % 10); 

	for (i = 1; i < 91; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + aft / 10 % 10); 
		_putchar('0' + aft % 10); 

		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (i = 92; i < 99; ++i)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + aft1 / 10 % 10); 
		_putchar('0' + aft1 % 10); 

		printf("%lu", aft2);

		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}

	_putchar('\n');
	return (0);
}


