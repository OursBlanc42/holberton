#include <unistd.h>
#include "main.h"

/**
 * print_to_98- Entry point
 * Description:  prints all natural numbers from n to 98
 * followed by a new line.
 * @n: start number
 * Return: nothing
 */

 /* Prototypes declaration */
void print_up_to_98(int n);
void print_down_to_98(int n);
void print_negative_to_zero(int n);

void print_to_98(int n)
{
	/* check n and apply right case */
	if (n <= 98 && n >= 0)
	{
		print_up_to_98(n);
	}
	else if (n > 98)
	{
		print_down_to_98(n);
	}
	else if (n < 0)
	{
		print_negative_to_zero(n);
	}
	/* break line at end*/
	_putchar('\n');
}

/**
 * print_up_to_98 - Count up from 0+ to 98
 * Description:  Count up from 0+ to 98
 * @n: start number
 * Return: nothing
 */
void print_up_to_98(int n)
{
	int c;
	int d;
	int u;
	int i;

	for (i = n; i <= 98; i++)
	{
		c = i / 100;
		d = (i / 10) % 10;
		u = i % 10;

		if (i == 98)
		{
		_putchar('9');
		_putchar('8');
		}
		else if (c != 0)
		{
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');

		}
		else if (d != 0)
		{
			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * print_down_to_98 - Count down from 98+ to 98
 * Description:  Count down from 98+ to 98
 * @n: start number
 * Return: nothing
 */
void print_down_to_98(int n)
{
	int c;
	int d;
	int u;
	int i;

	for (i = n ; i >= 98 ; i--)
	{
		c = i / 100;
		d = (i / 10) % 10;
		u = i % 10;

		if (i == 98)
		{
		_putchar('9');
		_putchar('8');
		}
		else if (c != 0)
		{
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');

		}
		else if (d != 0)
		{
			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}


/**
 * print_negative_to_zero - Count up from 0- to 0 then 0 to 98
 * Description:  Count up from 0- to 0 then 0 to 98
 * @n: start number
 * Return: nothing
 */
void print_negative_to_zero(int n)
{
	int c;
	int d;
	int u;
	int i;

	/* work with absolute value until 0*/
	n = n * (-1);

	for (i = n; i > 0; i--)
	{


		c = i / 100;
		d = (i / 10) % 10;
		u = i % 10;

		if (c != 0)
		{
			/* add minus sign */
			_putchar('-');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');

		}
		else if (d != 0)
		{
			/* add minus sign */
			_putchar('-');
			_putchar(d + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			/* add minus sign */
			_putchar('-');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

	/* After reaching 0, start from 0 to 98 */
	n = 0;
	print_up_to_98(n);
}

