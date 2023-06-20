#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main()
{
	char c;

	for(c = 'a'; c <= 'z'; c++) {
		if( c == 'e' || c == 'q') {
			continue;
		}
		printf("%c", c);
	}
		
	putchar('\n');
	return (0);

}
