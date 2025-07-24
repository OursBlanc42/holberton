#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * Description:  prints every minute starting from 00:00 to 19:59.
 * @int: int for display value below
 * Return: last digit
 */

/* prototype */
void part2(int, int, int);

void jack_bauer(void)
{
	/* declare variable */
	int mu;
	int md;
	int hu;
	int hd;

	/* case before 20:00 */
	for (hd = '0' ; hd <= '1' ; hd++)
	{
		for (hu = '0' ; hu <= '9'; hu++)
		{
			for (mu = '0' ; mu <= '9'; mu++)
			{
				for (md = '0'; md < '6'; md++)
				{
					for (mu = '0'; mu <= '9'; mu++)
					{
						_putchar(hd);
						_putchar(hu);
						_putchar(':');
						_putchar(md);
						_putchar(mu);
						_putchar('\n');
					}
				}

			}
		}

	}
	part2(hu, md, mu);
}

/**
 * part2 - Entry point
 * Description:  prints every minute starting from 20:00 to 23:59.
 * @mu: displays digit unit minute
 * @md: displays tens digit minute
 * @hu: displays digit unit hour
 * Return: last digit
 */

void part2(int hu, int md, int mu)
{
	/* case after 20:00 */
	for (hu = '0' ; hu <= '3' ; hu++)
	{
		for (mu = '0' ; mu <= '9' ; mu++)
		{
			for (md = '0' ; md < '6' ; md++)
			{
				for (mu = '0' ; mu <= '9' ; mu++)
				{
					_putchar('2');
					_putchar(hu);
					_putchar(':');
					_putchar(md);
					_putchar(mu);
					_putchar('\n');
				}
			}
		}
	}
}
