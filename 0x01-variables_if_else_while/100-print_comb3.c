#include <stdio.h>
/**
 * main - all possible different combinations of two digits to be printed
 * Return: 0
 */
int main()
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
